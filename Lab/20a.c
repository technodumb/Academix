// 20. Create a file and perform the following
// a. Write data to the file
// b. Read the data in a given file & display the file content on console
// c. append new data and display on console


#include<stdio.h>

void main(){
    int a[50][50], b[50][50], c[50][50];
    int r1,c1,r2,c2,r3,c3;
    printf("Enter the no of rows and columns of first array: ");
    scanf("%d %d",&r1, &c1);
    printf("Enter the number of rows and columns of second array: ");
    scanf("%d %d",&r2, &c2);
    if(c1==r2){
        printf("Matrix multiplication is possible.\n");
        printf("Enter the elements of the first matrix: \n");
        for(int i=0; i<r1; i++)
            for(int j=0; j<c1; j++)
                scanf("%d", &a[i][j]);
        printf("\nEnter the elements of the second matrix: \n");
        for(int i=0; i<r2; i++)
            for(int j=0; j<c2; j++)
                scanf("%d", &b[i][j]);
        printf("\n\nProduct of the arrays: \n");
        for(int i=0; i<r1; i++)
            for(int j=0; j<c2; j++){
                int temp=0;
                for(int k=0; k<c1; k++){
                    temp+=a[i][k]*b[k][j];
                }
                c[i][j]=temp;
            }
        r3=r1; c3=c2;
        for(int i=0; i<r3; i++){
            for(int j=0; j<c3; j++)
                printf("%d ", c[i][j]);
            printf("\n");
        }
    }
}
