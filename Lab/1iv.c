#include<stdio.h>

void main() {
    float a,b,c,d,e,f,g;
    char ch = 'a';
    printf("Enter the value of %c: ", ch++);
    scanf("%f", &a);
    printf("Enter the value of %c: ", ch++);
    scanf("%f", &b);
    printf("Enter the value of %c: ", ch++);
    scanf("%f", &c);
    printf("Enter the value of %c: ", ch++);
    scanf("%f", &d);
    printf("Enter the value of %c: ", ch++);
    scanf("%f", &e);
    printf("Enter the value of %c: ", ch++);
    scanf("%f", &f);
    printf("Enter the value of %c: ", ch++);
    scanf("%f", &g);

    printf("The solution is : %.02f", ((a -b / c * d + e) * (f +g)));
}