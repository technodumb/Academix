#include<stdio.h>

void main() {
    int n, arr[100], item;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d numbers: \n", n);
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);
    printf("Enter the element to be searched: ");
    scanf("%d", &item);

    int position = -1;
    for(int i=0; i<n; i++)
        if(arr[i] == item){
            position = i;
            break;
        }
    if(position >= 0)
        printf("%d found at index %d of the array.", item, position);
    else   
        printf("%d not found in the array.", item);
    printf("\n");
}