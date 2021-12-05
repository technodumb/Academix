#include<stdio.h>

// count number of characters, words and lines in a given file

void main(){
    FILE *fp;
    char ch;
    int c_count=0, w_count=0, l_count=0;
    char fname[100];
    printf("Enter the file name: ");
    scanf("%s", &fname);
    fp = fopen(fname, "r");
    if(fp == NULL){
        printf("File not found\n");
        return;
    }
    while(!feof(fp)){
        ch = getc(fp);
        if(ch == '\n')

            l_count++;
        if(ch == ' ' || ch == '\n')
            w_count++;
        c_count++;
    }
    printf("Number of characters: %d\n", c_count);
    printf("Number of words: %d\n", w_count);
    printf("Number of lines: %d\n", l_count);
    fclose(fp);
}
