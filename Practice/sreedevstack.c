// implement stack using array and create functions for push and pop
//
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100

void push(int *top, int *arr, int data)
{
    if(*top == MAX-1)
    {
        printf("Stack Overflow\n");
        return;
    }
    else
    {
        *top = *top + 1;
        arr[*top] = data;
    }
}

void pop(int *top, int *arr)
{
    if(*top == -1)
    {
        printf("Stack Underflow\n");
        return;
    }
    else
    {
        printf("Popped element: %d\n", arr[*top]);
        *top = *top - 1;
    }
}  

void display(int *top, int *arr)
{
    int i;
    if(*top == -1)
    {
        printf("Stack is empty\n");
        return;
    }
    else
    {
        printf("Stack elements are:\n");
        for(i=*top; i>=0; i--)
        {
            printf("%d\n", arr[i]);
        }
    }
}


void main(){
    int top = -1;
    int arr[MAX];
    int data;
    int choice;
    while(1){
        printf("\n\n1. Push\n2. Pop\n3. Display\n4. Exit\n- ");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                printf("Enter data to push\n");
                scanf("%d", &data);
                push(&top, arr, data);
                break;
            case 2:
                pop(&top, arr);
                break;
            case 3:
                display(&top, arr);
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }
}