// write a c program to read set of numbers from input file 'value.dat' and store the sorted numbers in an output file 'sort.re

#include <stdio.h>

main(){
    FILE *fp;
    int n=0, a[100];
    fp = fopen("value.dat", "r");
    if(fp == NULL)
        printf("File not found");
    for(int i=0; !feof(fp); i++){
        fscanf(fp, "%d", &a[i]);
        n++;
    }
    fclose(fp);

    printf("The numbers were read from value.dat\n\n");
    // bubble sort
    for(int i=0; i<n; i++){
        for(int j=0; j<n-1; j++){
            if(a[j]>a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    printf("The numbers were sorted\n\n");

    FILE *fp1 = fopen("sort.res", "w");
    for(int i=0; i<n; i++){
        fprintf(fp1, "%d\n", a[i]);
    }
    fclose(fp1);
    printf("The sorted numbers were written to sort.res\n");
}