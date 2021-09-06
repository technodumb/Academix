// 20. Create a file and perform the following
// a. Write data to the file
// b. Read the data in a given file & display the file content on console
// c. append new data and display on console


#include<stdio.h>
#include<stdlib.h>

void main(){
    FILE *fp;
    char ch;
    fp = fopen("file.txt","w");
    if(fp == NULL){
        printf("File not found");
        exit(0);
    }
    printf("\n\nEnter the data to be written to the file ('#' to stop writing):\n");
    while((ch = getchar()) != '#'){
        fputc(ch,fp);
    }
    fclose(fp);
    printf("Your data has been written to 'file.txt'\n");
    getch();
}
