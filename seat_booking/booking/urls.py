from django.urls import path
from . import views

urlpatterns = [
    path('', views.seat_list, name='seat_list'),
    path('book/<int:pk>/', views.book_seat, name='book_seat'),
]
