

#include<stdio.h>
#include<string.h>

void main(){
    FILE *f1,*f2,*f3;
    f1 = fopen("a.txt","r");
    f2 = fopen("b.txt","r");
    f3 = fopen("c.txt","w");

    if(!f1 || !f2){
        printf("Erorr opening file");
        return ;
    }

    char st1[100],st2[100];
    int count;
    while(!feof(f1)){
        fscanf(f1,"%s",st1);
        count = 0;
        fseek(f2,0,SEEK_SET);
        while(!feof(f2)){
            fscanf(f2,"%s",st2);
            if(strcmp(st1,st2)==0){
                count++;
            }
        }
        fprintf(f3,"%s : %d\n",st1,count);
    }
    fclose(f1);
    fclose(f2);
    fclose(f3);
}