#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

main(){
    int a[50], *pt, n;
    pt=a;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: \n");
    for(int i=0; i<n; i++){
        scanf("%d", pt);
        pt++;
    }

    for(int i=0; i<n-1; i++){
        pt = a;
        for(int j=0; j<n-i-1; j++){
            if(*(pt+j) > *(pt+j+1)){
                swap(pt+j, pt+j+1);
            }
        }
    }
    printf("\n\nThe elements of the sorted array are: \n");
    pt = a;
    for(int i=0; i<n; i++){
        printf("%d \n", *pt);
        pt++;
    }
}