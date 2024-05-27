#include <stdio.h>
int square(int num) {
    // If num is negative, square the absolute value
    if (num < 0) num = -num;

    int result = 0;

    while (num > 0) {
        if (num & 1) {
            result = result + num;
        }
        num = num >> 1;
        if (num > 0) {
            result = result << 1;
        }
    }

    return result;
}
int main() {
    // Bit manipulation example: setting all bits to 1
    int a = 0b10010000;
// How to Set the All The Bits    
    for (int i = 0; i < 8; i++) {
        a = a | (1 << i); // setting up all the bits
    }
    for (int i = 0; i < 8; i++) {
        printf("%d",(a>>i)&1); // printing the binary bits 
    }
// How to Set binary bit of an number and print its square
    int b = 9 ;
    b = b | (1<<1);
    printf("'\nThe suare of the setted bit is : %d",b*b);
    printf("\n%d\n", a);
    printf("Happy New Year 2024");
// Clear the bit of number and print its cube
    int c =5;
    c = c & ~(c<<2);
    printf("\n The cube of the number is : %d",c);
// Toggle the bits and prints its find the squrt of the number
    int d = 6 ;
    d = d ^ (1<<1);
    d= square(d); 
    printf("\nThe number is %d",d);
// to cheack the bit is set or reset 
    int e = 7;
    printf("\nIs tvrushabh sshe third bit set? %s",(e&(1<<3)) ? "Yes" : "No");
    
    return 0;
}
