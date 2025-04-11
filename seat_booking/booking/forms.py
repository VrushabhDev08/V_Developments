from django import forms
from .models import Seat

class SeatBookingForm(forms.ModelForm):
    class Meta:
        model = Seat
        fields = ['booked_by']
