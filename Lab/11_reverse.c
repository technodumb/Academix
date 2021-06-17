#include<stdio.h>

void main(){
    char word[100], rev[100];
    printf("Enter you word: ");
    gets(word);
    int len=0;
    while(word[len++]!='\0');
    len--;
    for(int i=0; i<len; i++)
        rev[i] = word[len-i-1];
    printf("The reversed string: %s", rev);
}
