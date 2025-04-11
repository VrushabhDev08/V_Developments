from django.db import models

class Seat(models.Model):
    CATEGORY_CHOICES = [
        ('2TIER', '2TIER'),
        ('3TIER', '3TIER'),
        ('HAT', 'HAT'),
    ]
    
    asset_name = models.CharField(max_length=50)
    seat_name = models.CharField(max_length=50)
    table_name = models.CharField(max_length=50)
    booked_by = models.CharField(max_length=100, blank=True, null=True)
    date = models.DateField()
    category = models.CharField(max_length=10, choices=CATEGORY_CHOICES, default='3TIER')
    is_available = models.BooleanField(default=True)

    def __str__(self):
        return f"{self.asset_name} - {self.seat_name} ({self.category})"
