from django.db import models
from django.contrib.auth.models import User

class SeatType(models.TextChoices):
    TWO_TIER = '2TIER', '2-Tier'
    THREE_TIER = '3TIER', '3-Tier'
    HAT = 'HAT', 'Hat'

class Seat(models.Model):
    seat_number = models.CharField(max_length=10)
    seat_type = models.CharField(max_length=6, choices=SeatType.choices)
    is_available = models.BooleanField(default=True)

    def __str__(self):
        return f'{self.seat_number} - {self.get_seat_type_display()}'

class Booking(models.Model):
    user = models.ForeignKey(User, on_delete=models.CASCADE)
    seat = models.ForeignKey(Seat, on_delete=models.CASCADE)
    booking_date = models.DateTimeField(auto_now_add=True)

    def __str__(self):
        return f'{self.user.username} booked {self.seat.seat_number} on {self.booking_date}'
