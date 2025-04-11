from django.urls import path
from . import views

urlpatterns = [
    path('available-seats/', views.available_seats, name='available_seats'),
    path('book-seat/<int:seat_id>/', views.book_seat, name='book_seat'),
    path('my-bookings/', views.bookings_list, name='bookings_list'),
]
