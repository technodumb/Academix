#include<stdio.h>

void swap(int *, int *);

void main() {
    int n, arr[100];
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter %d elements: \n", n);
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);
    
    int i, j;
    
    for(i=0; i<n-1; i++)
        for(j=0; j<n-i-1; j++)
            if(arr[j] > arr[j+1])
                swap(&arr[j], &arr[j+1]);

    printf("The sorted array is: \n");
    for(i=0; i<n; i++)  
        printf("%3d\n", arr[i]);
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}