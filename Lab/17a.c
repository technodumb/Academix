#include<stdio.h>
// add 2 numbers using pointers
void main(){
    int a,b,*pa,*pb, sum=0;
    pa=&a;
    pb=&b;
    printf("\n\n\n\nQ17 - a) Add Two Numbers\n\n");
    printf("Enter 2 numbers: ");
    scanf("%d%d",pa,pb);
    sum = *pa + *pb;
    printf("\nSum is %d\n\n\n",sum);
}