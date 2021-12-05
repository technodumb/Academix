#include<stdio.h>
#include<stdlib.h>

#define ruinx(x) x++

main(){
    char a[10], b[10];
    gets(a);
    for(int i=0; a[i]!='\0'; i++)
        b[i] = a[i];
    printf("%s",b);
}