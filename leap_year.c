#include<stdio.h>

void main() {
    int year;
    printf("Enter an Year: ");
    scanf("%d", &year); 
    // An year is a leap year when if its divisible by 4. 
    // But if the year is divisible by 100, it is not a leap year unless it is divisible by 400.
    if(year % 100 == 0) {
        if(year % 400 == 0)
            printf("%d is a leap year.", year);
        else
            printf("%d is not a leap year.", year);
    }
    else if(year % 4==0) 
        printf("%d is a leap year.", year);
    else
        printf("%d is not a leap year.", year);
}