#include<stdio.h>

int main(){
    char c;
    FILE *fp;
    fp = fopen("data.txt", "w+");
    if(fp == NULL){
        printf("File not found");
        return 0;
    }
    while(c != '.'){
        c=getchar();
        putc(c, fp);
    }
    // fseek(fp, 9, SEEK_SET);
    rewind(fp);
    fprintf(fp, "Banananananana");
    rewind(fp);
    while(!feof(fp)){
        c = getc(fp);
        printf("%c", c);
    }
    fclose(fp);
}
c
c
c
c
d
d
d
d
