# booking/models.py
from django.db import models
from django.contrib.auth.models import User

class Seat(models.Model):
    SEAT_CHOICES = [
        ('2TIER', '2TIER'),
        ('3TIER', '3TIER'),
        ('HAT', 'HAT'),
    ]
    ASSET_CHOICES = [(f'Asset_{i+1}', f'Asset_{i+1}') for i in range(12)]  # Assets Asset_1 to Asset_12

    asset = models.CharField(max_length=50, choices=ASSET_CHOICES)
    seat_number = models.CharField(max_length=10)
    seating_type = models.CharField(max_length=10, choices=SEAT_CHOICES, default='2TIER')
    date = models.DateField()
    status = models.CharField(max_length=10, choices=[('Available', 'Available'), ('Booked', 'Booked')], default='Available')

    def __str__(self):
        return f"{self.asset} - {self.seat_number} ({self.status})"
