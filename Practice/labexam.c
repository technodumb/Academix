// Create a file named MARKS with
// marks of 6 subjects. Code a program to read these marks, and then write all
// ‘pass’ marks to a file called PASS and all ‘fail’ marks to a file called
// FAIL. Also write the total marks of all subjects in the file MARKS without
// changing its contents.

#include <stdio.h>

main(){
    FILE *fp, *fppass, *fpfail;
    fp = fopen("MARKS.txt","r");
    fppass = fopen("PASS.txt","w");
    fpfail = fopen("FAIL.txt","w");
    int marks[100], sum = 0, temp;
    for(int i=0; !feof(fp); i++){
        fscanf(fp," %d",&marks[i]);
        sum += marks[i];
        if(marks[i]>=40){
            fprintf(fppass,"%d\n",marks[i]);
        }
        else{
            fprintf(fpfail,"%d\n",marks[i]);
        }
    }
    fclose(fp);
    fclose(fppass);
    fclose(fpfail);
    printf("Total marks: %d\n",sum);
    fopen("MARKS.txt","a");
    fprintf(fp,"\nTotal Marks: %d",sum);
    fclose(fp);
}