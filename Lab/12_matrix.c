#include<stdio.h>
#include<conio.h>

int mat1[100][100], mat2[100][100], mat3[100][100], r1, c1, r2, c2, r3, c3;

void clrscr(){
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
}

void readmat(){
    int choice;
    clrscr();
    printf("Matrix 1 -\n\n");
    printf("No. of rows: ");
    scanf("%d", &r1);
    printf("No. of columns: ");
    scanf("%d", &c1);
    printf("Enter the elements of the matrix:\n");
    for(int i=0; i<r1; i++)
        for(int j=0;j<c1; j++)
            scanf("%d", &mat1[i][j]);
    printf("\nMatrix 2 -\n\n");
    printf("No. of rows: ");
    scanf("%d", &r2);
    printf("No. of columns: ");
    scanf("%d", &c2);
    printf("Enter the elements of the matrix:\n");
    for(int i=0; i<r2; i++)
        for(int j=0;j<c2; j++)
            scanf("%d", &mat2[i][j]);
    r3=c3=0;
}

void dispmat(){
    printf("\n\nMatrix 1 - \n");
    for(int i=0; i<r1; i++){
        for(int j=0; j<c1; j++)
            printf("  %3d", mat1[i][j]);
        printf("\n");
    }

    printf("\n\nMatrix 2 - \n");
    for(int i=0; i<r2; i++){
        for(int j=0; j<c2; j++)
            printf("  %3d", mat2[i][j]);
        printf("\n");
    }
    printf("\n\nMatrix 3 - \n");
    for(int i=0; i<r3; i++){
        for(int j=0; j<c3; j++)
            printf("  %3d", mat3[i][j]);
        printf("\n");
    }
    getch();
}

void summat(){
    clrscr();
    if(r1!=r2 || c1!=c2){
        printf("The matrices are of different dimensions, and hence cannot be added together.");
        getch();
    }
    else{
        printf("The sum of Matrix 1 and Matrix 2 is stored in Matrix 3.\n\n");
        for(int i=0; i<r1; i++)
            for(int j=0; j<c1; j++)
                mat3[i][j] = mat1[i][j] + mat2[i][j];
        r3 = r1; 
        c3 = c1;
        dispmat();
    }
}

void prodmat(){
    clrscr();
    if(c1 != r2){
        printf("The matrices cannot be multiplied.");
        getch();
    }
    else{
        c3=c2; r3 = r1;
        for(int i=0; i<r3; i++)
            for(int j=0; j<c3; j++){
                mat3[i][j] = 0;
                for(int k=0; k<c1; k++)
                    mat3[i][j] += mat1[i][k]*mat2[k][j];
            }
        printf("The product of Matrix 1 and Matrix 2 are stored in Matrix 3.");
        dispmat();
    }
}

void trpmat(){
    printf("\n\nTranspose of Matrix 1 - \n\n");
    for(int j=0; j<c1; j++){
        for(int i=0; i<r1; i++)
            printf("  %3d", mat1[i][j]);
        printf("\n");
    }
    printf("\n\nTranspose of Matrix 2 - \n\n");
    for(int j=0; j<c2; j++){
        for(int i=0; i<r2; i++)
            printf("  %3d", mat2[i][j]);
        printf("\n");
    }
    getch();
}


void main(){
    int choice;
    readmat();
    do {
        clrscr();
        printf("\t\tTHE MATRIX CALCULATOR\n\n");
        printf("MENU\n");
        printf("\n1. Sum of Matrices.");
        printf("\n2. Product of Matrices");
        printf("\n3. Transpose of Matrix.");
        printf("\n4. Exit.");
        printf("\n\n> ");
        scanf("%d",&choice);
        switch(choice){
            case 1: summat();
                    break;
            case 2: prodmat();
                    break;
            case 3: trpmat();
                    break;
            case 4: printf("\nExiting...");
                    break;
            default: printf("Enter a valid choice");
                    getch();
        }
    }
    while(choice!=4);
}