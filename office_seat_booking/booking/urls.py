# booking/urls.py
from django.urls import path
from . import views

urlpatterns = [
    path('', views.home, name='home'),  # Add this line
    path('find_seat/', views.find_seat, name='find_seat'),
    path('book_seat/', views.book_seat, name='book_seat'),
    path('view_bookings/', views.view_bookings, name='view_bookings'),
]
