from django.shortcuts import render, redirect, get_object_or_404
from .models import Seat, Booking
from django.contrib.auth.decorators import login_required

def available_seats(request):
    seats = Seat.objects.filter(is_available=True)
    return render(request, 'available_seats.html', {'seats': seats})

@login_required
def book_seat(request, seat_id):
    seat = get_object_or_404(Seat, id=seat_id)
    if seat.is_available:
        Booking.objects.create(user=request.user, seat=seat)
        seat.is_available = False
        seat.save()
        return redirect('available_seats')
    else:
        return render(request, 'error.html', {'message': 'Seat already booked!'})

def bookings_list(request):
    bookings = Booking.objects.filter(user=request.user)
    return render(request, 'bookings_list.html', {'bookings': bookings})
