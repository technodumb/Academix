#include<stdio.h>

void arraysum(int *a, int n){
    int *ptr = a, sum=0;
    for(int i=0; i<n; i++)
        sum += *ptr++;
    printf("\nThe sum of the elements in the array is %d\n\n\n", sum);
}

void main(){
    int a[101], n, *ptr;
    ptr = a;
    printf("\n\n\n\nQ18 - Compute sum of the elements stored in an array using pointers and user defined function.\n\n");
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for(int i=0; i<n; i++)
        scanf("%d", ptr++);
    arraysum(a, n);
    getch();
}