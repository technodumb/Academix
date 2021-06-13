#include<stdio.h>
#include<conio.h>

void main(){
    float rate,n_unit, st, en;;
    printf("Enter the inital and final reading:\n");
    scanf("%f %f", &st, &en);
    n_unit = en-st;
    if(n_unit<100)
        rate = 1;
    else if (n_unit<=200)
        rate = 2.5;
    else if (n_unit<=500)
        rate = 3.5;
    else
        rate = 4.5;
    printf("Total bill for %.2f unit is %.2f", n_unit, rate*n_unit);
}