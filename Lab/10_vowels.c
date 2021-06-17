#include<stdio.h>

void main() {
    char str[100];
    printf("Enter the string: ");
    gets(str);
    int sp=0, vow=0, cons=0, i=0;
    char c;
    while(1){
        c = str[i++];
        if(c == '$')
            break;
        else if (c == ' ')
            sp++;
        else if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
            vow++;
        else
            cons++;
    }
    printf("No. of vowels - %d\n", vow);
    printf("No. of consonants - %d\n", cons);
    printf("No. of spaces - %d\n", sp);
}