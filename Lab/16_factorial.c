#include<stdio.h>

int factorial_recursive(int n) {
    if(n==0) return 1;

    else return n * factorial_recursive(n-1);
}

int factorial_non_recursive(int n) {
    if(n==0) return 1;

    int fact = 1;
    for(int i=n; i>0; i--){
        fact *= i;
    }
    return fact;
}

void main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("\n\nFactorial: ");
    printf("\n\t Recursive:     %d", factorial_recursive(n));
    printf("\n\t Non-recursive: %d", factorial_non_recursive(n));
    printf("\n\n");
}
