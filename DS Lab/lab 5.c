#include<stdio.h>
// write a menu driven program that has the menu items:
// 1. Input the arrays
// 2. Search for an element using Linear Search
// 3. Search for an element using Binary Search
// 4. Exit

int arr[100], arrsrt[100], n;

void input_array(){
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
}

void show_array(int arr[100]){
    for(int i=0; i<n; i++)
        printf("%d ", arr[i]);
}

void linearSearch() {
    printf("Enter the element to be searched: ");
    int elem, flag = 0;
    scanf("%d", &elem);
    printf("The array is: ");
    show_array(arr);
    for(int i=0; i<n; i++){
        if(arr[i] == elem){
            printf("\nElement found at index %d\n", i);
            flag = 1;
            break;
        }
    }
    if(!flag){
        printf("\nElement not found\n");
    }
}

void sort() {
    int temp;
    for(int i=0; i<n; i++)
        arrsrt[i] = arr[i];
    for(int i = 0; i<n-1; i++)
        for(int j = i+1; j<n; j++)
            if(arrsrt[i] > arrsrt[j]){
                temp = arrsrt[i];
                arrsrt[i] = arrsrt[j];
                arrsrt[j] = temp;
            }
}

void binarySearch() {
    printf("Enter the element to be searched: ");
    int elem, flag = 0;
    scanf("%d", &elem);
    sort();
    printf("Sorted elements: ");
    show_array(arrsrt);
    int low = 0, high = n-1, mid;
    while(low <= high){
        mid = (low + high)/2; 
        if(arrsrt[mid] == elem){
            printf("\nElement found at index %d\n", mid);
            flag = 1;
            break;
        }
        else if(arrsrt[mid] < elem)
            low = mid + 1;
        else
            high = mid - 1;
    }
    if(!flag)
        printf("Element not found\n");
}

void main() {
    int choice;
    do{
        printf("\n\nMENU\n");
        printf("1. Input the arrays\n");
        printf("2. Search for an element using Linear Search\n");
        printf("3. Search for an element using Binary Search\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                input_array();
                break;
            case 2:
                linearSearch();
                break;
            case 3:
                binarySearch();
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice\n");
        }
    }while(choice != 4);
}