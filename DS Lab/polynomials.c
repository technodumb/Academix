// 
#include <stdio.h>
#include <stdlib.h>

int main(){
    int deg1, deg2, deg3, poly1[10]={0}, poly2[10]={0}, polysum[10];
    printf("Enter the degree of the first polynomial: ");
    scanf("%d", &deg1);
    printf("Enter the coefficients of the first polynomial: \n");
    for(int i = 0; i <= deg1; i++){
        printf("x^%d: ", i);
        scanf("%d", &poly1[i]);
    }
    printf("Enter the degree of the second polynomial: ");
    scanf("%d", &deg2);

    printf("Enter the coefficients of the second polynomial: \n");
    for(int i = 0; i <= deg2; i++){
        printf("x^%d: ", i);
        scanf("%d", &poly2[i]);
    }
    for(int i = 0; i <= deg1; i++){
        polysum[i] = poly1[i] + poly2[i];
    }

    deg3 = (deg1>deg2)? deg1 : deg2;

    printf("\nFirst polynomial:\n");
    printf("%d ", poly1[0]);
    for(int i = 1; i <= deg1; i++){
        printf("+ %dx^%d ", poly1[i], i);
    }
    printf("\n\nSecond polynomial:\n");
    printf("%d ", poly2[0]);
    for(int i = 1; i <= deg2; i++){
        printf("+ %dx^%d ", poly2[i], i);
    }
    printf("\n\nThe sum of the two polynomials is: \n");
    printf("%d ", polysum[0]);
    for(int i = 1; i <= deg3; i++){
        printf("+ %dx^%d ", polysum[i], i);
    }
    return 0;
}