#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


char infix_string[20], postfix_string[20];
int top; int stack[20];

int precedence(char symbol);
int isEmpty();
void infix_to_postfix();
int check_space(char symbol);
void push(long int symbol);
int pop();
void evaluate_postfix();


int main() {
    int choice, length;
    char temp;
    top = -1;
    do {
        printf("\n\n\n\n\n\n\t\tMENU");
        printf("\n The Infix Expression is : %s\n\n", infix_string);
        printf("\n1. Input the Infix Expression.");
        printf("\n2. Convert the Infix Expression to Postfix Expression");
        printf("\n3. Evaluation the Postfix Expression");
        printf("\n4. Exit");
        printf("\nEnter your choice : ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("\nEnter the Infix Expression : ");
                scanf("%s", infix_string);
                break;
            case 2:
                infix_to_postfix();
                break;
            case 3:
                evaluate_postfix();
                break;
            case 4:
                printf("Exiting\n\n");
                break;
            default:
                printf("\nInvalid Choice");
                break;
        }
    } while(choice!=4);
    return 0;
}

void infix_to_postfix() {
    unsigned int count, temp = 0;
    char next;
    char symbol;
    for(count = 0; count < strlen(infix_string); count++) {
        symbol = infix_string[count];   // Scanning the input expression
        if(!check_space(symbol)) {
            switch(symbol) {
                case '(': push(symbol);
                    break;
                case ')':
                    while((next = pop()) != '(') {
                        postfix_string[temp++] = next;
                    }

                    break;
                case '+':
                case '-':
                case '*':
                case '/':
                case '%':
                case '^':
                    while(!isEmpty() && precedence(stack[top]) >= precedence(symbol) && symbol!='^')   // Check precedence and push the higher one
                        postfix_string[temp++] = pop();
                    push(symbol);
                    break;
                default:
                    postfix_string[temp++] = symbol;
            }
        }
    }

    while(!isEmpty()) 
        postfix_string[temp++] = pop();

    postfix_string[temp] = '\0';
    printf("\n\nPostfix Expression : %s", postfix_string);
}

int precedence(char symbol){
    switch(symbol) {
        case '(': return 0;
        case '+':
        case '-':
            return 1;
        case '*':
        case '/':
        case '%':
            return 2;

        case '^':
            return 3;
        default:
            return 0;
    }
}

int check_space(char symbol) {
    if(symbol == '\t' || symbol == ' ' )
        return 1;
    else
        return 0;
}

int isEmpty() {
    return top == -1;
}

void push(long int symbol) {
    if(top > 20) {
        printf("Stack Overflow\n");
        exit(1);
    }
    top = top + 1;
    stack[top] = symbol;    // Push the symbol and make it as TOP
}

int pop() {
    if(isEmpty()) {
        printf("Stack is Empty\n");
        exit(1);
    }
    return(stack[top--]);  // Pop the symbol and decrement TOP
}


void evaluate_postfix() {
    long int a,b,temp,result;
    unsigned int i;
    for(i=0;i<strlen(postfix_string);i++) {
        if(postfix_string[i] <='9' && postfix_string[i]>='0')
                push(postfix_string[i]-'0');
        if(postfix_string[i] >= 'a' && postfix_string[i] <= 'z'){
            int x;
            printf("Enter the value for %c: ", postfix_string[i]);
            scanf("%d", &x);
            push(x);
        }
        else {
            a=pop();
            b=pop();
            switch(postfix_string[i]) {
            case '+':
                    temp=b+a; break;
            case '-':
                    temp=b-a; break;
            case '*':
                    temp=b*a; break;
            case '/':
                    temp=b/a; break;
            case '%':
                    temp=b%a; break;
            case '^':
                    temp=pow(b,a);
            }
            push(temp);
        }
    }
    result=pop();
    printf("\nRESULT : %ld\n\n",result);
}