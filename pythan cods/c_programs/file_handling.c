#include<stdio.h>

void handling(int z) {
    short int a;
    FILE *filep;
    
    filep = fopen("data.txt", "w");
    
    if (filep == NULL) {
        printf("Error opening the file.\n");
    }
    else {
        printf("\nEnter the number you wanted to enter: ");
        scanf("%hd", &a);  
        fprintf(filep, "%hd", a);   
    }
    
    fclose(filep);
}
void dtob(int num)
{
    
     int binaryArray[32];
    int numBits;
     int index = 0;
    
    while (num > 0) {
        binaryArray[index++] = num % 2;
        num /= 2;
    }

    numBits = index;

      
    printf("Binary representation: ");
    for (int i = numBits - 1; i >= 0; i--) {
        printf("%d", binaryArray[i]);
    }
    printf("\n");
}
void converting() {
    short int a;
    FILE *filep;
    
    filep = fopen("data.txt", "a+");
    
    if(filep == NULL) {
        printf("Error while opening the file.\n");
    }
    else {
        fscanf(filep, "%hd", &a);   
        printf("\nNumber read from the file: %hd\n", a);   
        dtob(a);
    
    }

    fclose(filep);
}

int main() {
    int (*fptr)(int);
    fptr = &handling;
    printf("\nThe address of the pointer is %d",fptr);
    fptr(5);
    converting();
    printf("\nThe address of the pointer after the calling is %d",fptr);
    
    return 0;
}
