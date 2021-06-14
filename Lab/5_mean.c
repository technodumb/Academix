#include<stdio.h>

void main() {
    int arr[100];
    float n, sum=0;
    printf("Enter number of elements: ");
    scanf("%f", &n);
    printf("Enter %.0f numbers: \n", n);
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("\nThe sum of the elements = %.0f", sum);
    printf("\nThe average = %.03f\n", sum/n);
}
