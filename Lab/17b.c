#include<stdio.h>
// swap two numbers using pointers function
void swap(int *a, int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

void main()
{
    int a, b, *pa, *pb;
    pa = &a;
    pb = &b;
    printf("\n\n\n\nQ17 - b) Swap Two Numbers Using a Function\n\n");
    printf("Enter two numbers: ");
    scanf("%d%d", pa, pb);
    printf("Before Swap:\n\t a = %d \n\t b = %d\n",a,b);
    swap(pa, pb);
    printf("\nAfter Swap:\n\t a = %d \n\t b = %d\n\n\n",a,b);
    getch();
}
