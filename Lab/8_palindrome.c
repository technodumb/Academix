#include<stdio.h>

void main(){
    char word[100];
    printf("Enter any word: ");
    gets(word);
    int len = 0, palindrome = 1;
    for(len=0; word[len]!='\0';len++);
    // Palindrome means the word reads the same both forwards and backwards.
    for(int i=0; i<=len/2; i++)
        if(word[i] != word[len-i-1]){
            palindrome--;
            break;
        }
    if(palindrome)
        printf("%s is a Palindrome.", word);
    else
        printf("%s is not a Palindrome.", word);
    printf("\n");
}