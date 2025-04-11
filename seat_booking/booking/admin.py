from django.contrib import admin
from .models import Seat

@admin.register(Seat)
class SeatAdmin(admin.ModelAdmin):
    list_display = ('asset_name', 'seat_name', 'table_name', 'booked_by', 'date', 'category', 'is_available')
    list_filter = ('category', 'is_available')
    search_fields = ('asset_name', 'seat_name', 'table_name')
