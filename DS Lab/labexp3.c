// implement a stack using arrays with the operations:
// push
// pop
// display the elements of the stack after each operations

#include<stdio.h>

int stack[100], top=-1, size;

void display(){
    if(top == -1){
        printf("Stack is empty\n");
        getche();
        return;
    }
    printf("Stack elements are:\n");
    for(int i=top; i>=0; i--){
        printf("%d  ", stack[i]);
    }
    getche();
}

void push(int x){
    if(top == size-1){
        printf("Stack Overflow\n");
        return;
    }
    top++;
    stack[top] = x;
    printf("%d pushed to stack\n", x);
    display();
}

int pop(){
    if(top == -1){
        printf("\nStack Underflow\n");
        return -1;
    }
    int x = stack[top];
    top--;
    printf("\n%d popped from stack\n", x);
    display();
    return x;
}

void main(){
    printf("Enter the size of the stack\n");
    scanf("%d", &size);
    int choice;
    do {
        printf("\n\n\n\n\n\n\t\tMENU");
        printf("\n1. Push");
        printf("\n2. Pop");
        printf("\n3. Display");
        printf("\n4. Exit");
        printf("\nEnter your choice\n");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                printf("Enter the element to be pushed: ");
                int x;
                scanf("%d", &x);
                push(x);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting\n");
                break;
            default:
                printf("Invalid choice\n");
        }
    } while(choice!=4);
}