#include<stdio.h>

// write a menu driven program to enter 2 matrices in normal form, convert the 2 matrices to tuple form, transpose of the 2 matrices in tuple form, normal form of the transposed matrix from the tuple form, and sum of the 2 matrices which are represented in the tuple form and display the result in tuple form.
int r1, c1, n1=0, mat1[100][100]={0}, tup1[100][3]={0};
int r2, c2, n2=0, mat2[100][100]={0}, tup2[100][3]={0};
int trn1[100][100], tr1[100][3], trn2[100][100], tr2[100][3];
int tupsum[100][3];

int arrFilled = 0;

void showNormal(int mat[100][100], int r, int c){
    int i, j;
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

void showTuple(int tup[100][3]){
    int i, j;
    for(i=0; i<=tup[0][2]; i++){
        printf("%d\t%d\t%d\n", tup[i][0], tup[i][1], tup[i][2]);
    }
}

void arrInput(){
    printf("Enter the no of rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter the elements of the first matrix: ");
    for(int i=0; i<r1; i++){
        for(int j=0; j<c1; j++){
            scanf("%d", &mat1[i][j]);
            if(mat1[i][j])
                n1++;
        }
    }
    printf("Array 1: \n");
    for(int i=0; i<r1; i++){
        for(int j=0; j<c1; j++){
            printf("%d ", mat1[i][j]);
        }
        printf("\n");
    }

    printf("Enter the no of rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);
    printf("Enter the elements of the second matrix: ");
    for(int i=0; i<r2; i++){
        for(int j=0; j<c2; j++){
            scanf("%d", &mat2[i][j]);
            if(mat2[i][j])
                n2++;
        }
    }
    printf("Array 2: \n");
    for(int i=0; i<r2; i++){
        for(int j=0; j<c2; j++){
            printf("%d ", mat2[i][j]);
        }
        printf("\n");
    }
    arrFilled=1;

}

void normal2tuple(int mat[100][100], int r, int c, int tup[100][3]){
    int i, j, k=1;
    tup[0][0] = r;
    tup[0][1] = c;
    for(i=0; i<r1; i++){
        for(j=0; j<c1; j++){
            if(mat[i][j]){
                tup[k][0] = i;
                tup[k][1] = j;
                tup[k][2] = mat[i][j];
                k++;
            }
        }
    }
    tup[0][2] = k-1;
    showTuple(tup);
}

void transposeTuple(int tr[100][3], int tup[100][3]){
    for(int k=0; k<=tup[0][2]; k++){
        tr[k][0] = tup[k][1];
        tr[k][1] = tup[k][0];
        tr[k][2] = tup[k][2];
    }
    showTuple(tr);
}

void tuple2normal(int tr[100][3], int trn[100][100]){
    for(int k=1; k<=tr[0][2]; k++){
        trn[tr[k][0]][tr[k][1]] = tr[k][2];
    }
    for(int i = 0; i<tr[0][0]; i++){
        for(int j = 0; j<tr[0][1]; j++){
            if(!trn[i][j])
                trn[i][j] = 0;
        }
    }
    showNormal(trn, tr[0][0], tr[0][1]);
}

void matsum(int tup1[100][3], int tup2[100][3]){
    if(tup1[0][0]!=tup2[0][0] || tup1[0][1]!=tup2[0][1]){
        printf("Matrices cannot be added.\n");
        return;
    }
    int n=1, flag=0;
    tupsum[0][0] = tup1[0][0];
    tupsum[0][1] = tup1[0][1];
    for(int i=1; i<=tup1[0][2]; i++){
        tupsum[n][0] = tup1[i][0];
        tupsum[n][1] = tup1[i][1];
        tupsum[n][2] = tup1[i][2];
        n++;
    }
    for(int i=1; i<=tup2[0][2]; i++){
        flag=0;
        for(int j=1; j<=n; j++){
            if(tupsum[j][0]==tup2[i][0] && tupsum[j][1]==tup2[i][1]){
                tupsum[j][2] += tup2[i][2];
                flag = 1;
                break;
            }
        }
        if(!flag){
            tupsum[n][0] = tup2[i][0];
            tupsum[n][1] = tup2[i][1];
            tupsum[n][2] = tup2[i][2];
            n++;
        }
    }
    tupsum[0][2] = n-1;
    printf("The sum of the matrices: \n");
    showTuple(tupsum);
}

int main(){
    int choice;
    do {
        printf("\n\n\n\n\t\tTHE MATRIX PROGRAM\n\n");
        printf("1. Enter the 2 matrices in the normal form\n");
        printf("2. Convert the 2 matrices to tuple form\n");
        printf("3. Transpose the 2 matrices in tuple form\n");
        printf("4. Convert the transposed matrix from tuple form to normal form\n");
        printf("5. Show the sum of the 2 matrices which are represented in the tuple form\n");
        printf("6. Exit\n\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1: arrInput();
                    break;
            case 2: printf("Array 1: \n");
                    normal2tuple(mat1, r1, c1, tup1);
                    printf("\n\nArray 2: \n");
                    normal2tuple(mat2, r2, c2, tup2);
                    break;
            case 3: printf("Transpose of matrix 1: ");
                    transposeTuple(tr1, tup1);
                    printf("\n\nTranspose of matrix 2: ");
                    transposeTuple(tr2, tup2);
                    break;
            
            case 4: printf("\n\nTranspose of matrix 1: \n");
                    tuple2normal(tr1, trn1);
                    printf("\n\nTranspose of matrix 2: \n");
                    tuple2normal(tr2, trn2);
                    break;
            case 5: matsum(tup1, tup2);
                    break;
            case 6: printf("\n\n\n\n\t\tTHANK YOU\n\n\n\n");
                    break;
            default: printf("\n\n\n\n\t\tINVALID CHOICE\n\n\n\n");
        }
    }
    while(choice!=6);
}