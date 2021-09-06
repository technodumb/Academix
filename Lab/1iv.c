#include<stdio.h>

void main() {
    float a,b,c,d,e,f,g;
    char ch = 'a';
    printf("Enter the value of A: ");
    scanf("%f", &a);
    printf("Enter the value of B: ");
    scanf("%f", &b);
    printf("Enter the value of C: ");
    scanf("%f", &c);
    printf("Enter the value of D: ");
    scanf("%f", &d);
    printf("Enter the value of E: ");
    scanf("%f", &e);
    printf("Enter the value of F: ");
    scanf("%f", &f);
    printf("Enter the value of G: ");
    scanf("%f", &g);

    printf("The solution is : %.02f\n", ((a - (b / c * d + e)) * (f+g)));
}
