from django.shortcuts import render, get_object_or_404, redirect
from .models import Seat
from .forms import SeatBookingForm

def seat_list(request):
    category = request.GET.get('category', '2TIER')  # Default to '2TIER' if no category is selected
    seats = Seat.objects.filter(category=category)
    return render(request, 'booking/seat_list.html', {'seats': seats, 'category': category})

def book_seat(request, pk):
    seat = get_object_or_404(Seat, pk=pk)
    if request.method == 'POST':
        form = SeatBookingForm(request.POST, instance=seat)
        if form.is_valid():
            seat = form.save(commit=False)
            seat.is_available = False
            seat.save()
            return redirect('seat_list')
    else:
        form = SeatBookingForm(instance=seat)
    return render(request, 'booking/book_seat.html', {'form': form, 'seat': seat})

def unbook_seat(request, pk):
    seat = get_object_or_404(Seat, pk=pk)
    if request.method == 'POST':
        seat.booked_by = ''
        seat.is_available = True
        seat.save()
        return redirect('seat_list')
    return render(request, 'booking/unbook_seat.html', {'seat': seat})

def seat_list(request):
    category = request.GET.get('category', '2TIER')
    seats = Seat.objects.filter(category=category)
    return render(request, 'booking/seat_list.html', {'seats': seats, 'category': category})