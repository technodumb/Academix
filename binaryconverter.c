#include<stdio.h>

void main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int bin=0, digit = 1;
    while(n>0){
        bin+= digit*(n%2);
        digit*=10;
        n/=2;
    }
    printf("%d", bin);
}
