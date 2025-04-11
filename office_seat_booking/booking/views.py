# booking/views.py
from datetime import datetime
from django.shortcuts import render, redirect
from .models import Seat
from django.contrib.auth.decorators import login_required
from django.contrib import messages

@login_required(login_url='signin')
def find_seat(request):
    context = {}
    if request.method == 'POST':
        seating_type = request.POST.get('seating_type')
        date_r = request.POST.get('date')
        date_r = datetime.strptime(date_r, "%Y-%m-%d").date()
        seats_list = Seat.objects.filter(seating_type=seating_type, date=date_r)
        context['seats_list'] = seats_list
        if seats_list:
            return render(request, 'booking/seats_list.html', context)
        else:
            context["error"] = "No seats available for the selected type and date."
            return render(request, 'booking/find_seat.html', context)
    else:
        return render(request, 'booking/find_seat.html')

@login_required(login_url='signin')
def book_seat(request):
    context = {}
    if request.method == 'POST':
        seat_ids = request.POST.getlist('seat_ids')
        if seat_ids:
            seats = Seat.objects.filter(id__in=seat_ids, status='Available')
            if seats.count() == len(seat_ids):
                seats.update(status='Booked')
                messages.success(request, "Seats booked successfully.")
                return redirect('view_bookings')
            else:
                context["error"] = "Some selected seats are not available."
                return render(request, 'booking/find_seat.html', context)
    return redirect('find_seat')

@login_required(login_url='signin')
def view_bookings(request):
    context = {}
    booked_seats = Seat.objects.filter(status='Booked')
    context['booked_seats'] = booked_seats
    return render(request, 'booking/booked_seats.html', context)
