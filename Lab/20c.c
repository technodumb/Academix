#include<stdio.h>
#include<stdlib.h>

void main(){
    FILE *fp;
    char ch;
    fp = fopen("file.txt","a");
    printf("\n\nEnter the data to be appended to the file ('#' to stop appending):\n");
    while((ch = getchar()) != '#'){
        fputc(ch,fp);
    }
    fclose(fp);
    printf("\n\nThe data has been appended to the file.\n");

    fp = fopen("file.txt","r");
    printf("\n\nThe content of the file is:\n");
    while((ch = fgetc(fp)) != EOF){
        printf("%c",ch);
    }
    fclose(fp);\
    printf("\n\n");
    getch();
}