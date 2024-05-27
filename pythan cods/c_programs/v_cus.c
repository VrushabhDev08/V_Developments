#include "vcust.h"

// Function to add two numbers
int add(int a, int b) {
    return a + b;
}

// Function to subtract two numbers
int subtract(int a, int b) {
    return a - b;
}

// Function to multiply two numbers
int multiply(int a, int b) {
    return a * b;
}

// Function to divide two numbers
double divide(int a, int b) {
    // Ensure division by zero doesn't occur
    if (b != 0) {
        return (double)a / b;
    } else {
        return 0; // Handle division by zero error
    }
}

// Function to calculate the square of a number
int square(int x) {
    return x * x;
}
