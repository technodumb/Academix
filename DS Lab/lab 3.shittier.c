// implement a stack using arrays with the operations:
// push
// pop
// display the elements of the stack after each operations

#include<stdio.h>

int stack[100], top=-1, size;

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
                if(top == size-1){
                    printf("Stack Overflow\n");
                }
                
                else{
                    top++;
                    stack[top] = x;
                    printf("%d pushed to stack\n", x);
                    printf("Stack elements are:\n");
                    for(int i=top; i>=0; i--){
                        printf("%d\n", stack[i]);
                    }
                }
                break;
            case 2:
                if(top == -1){
                    printf("\nStack Underflow\n");        
                }
                else {
                    int x = stack[top];
                    top--;
                    printf("\n%d popped from stack\n", x);
                }
                if(top == -1){
                    printf("Stack is empty\n");
                }
                else{    
                    printf("Stack elements are:\n");
                    for(int i=top; i>=0; i--){
                        printf("%d\n", stack[i]);
                    }
                }
                break;
            case 3:
                if(top == -1)
                    printf("Stack is empty\n");
                else{
                    printf("Stack elements are:\n");
                    for(int i=top; i>=0; i--){
                        printf("%d  ", stack[i]);
                    }
                }
                break;
            case 4:
                printf("Exiting\n");
                break;
            default:
                printf("Invalid choice\n");
        }
    } while(choice!=4);
}