#include<stdio.h>

void main(){
    char word1[100], word2[100], newword[200];
    int i=0,j=0;
    printf("Enter the first word: ");
    gets(word1);
    printf("Enter the second word: ");
    gets(word2);
    for(j=0; word1[j]!='$' && word1[j]!='\0'; j++, i++)
        newword[i] = word1[j];

    for(j=0; word2[j]!='$' && word2[j]!='\0'; j++, i++)
        newword[i] = word2[j];
    newword[i]='\0';
    printf("The concatenated word is: %s\n", newword);
}