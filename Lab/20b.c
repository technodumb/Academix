#include<stdio.h>
#include<stdlib.h>

void main(){
    FILE *fp;
    char ch;
    fp = fopen("file.txt","r");
    printf("\n\n20 - b) Read the data in the given file and display content on console");
    printf("\n\nThe data stored in the file: \n\n\n");
    while((ch = getc(fp)) != EOF){
        printf("%c",ch);
    }
    printf("\n");
    fclose(fp);
    getch();
}