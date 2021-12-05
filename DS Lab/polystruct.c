#include<stdio.h>

struct polynomial {
    int coefficient;
    int expx;
};
int main(){
    struct polynomial p1[10], p2[10], p3[10], temp;
    int n1, n2, n3;
    printf("No of terms of first polynomial: ");
    scanf("%d",&n1);
    printf("Enter the terms of the first polynomial: ");
    for(int i=0; i<n1; i++){
        printf("coeff and exp of term #%d: ", i+1);
        scanf("%d %d",&p1[i].coefficient, &p1[i].expx);
    }

    printf("Polynomial 1: ");
    for(int i=0; i<n1-1; i++)
        printf("%dx^%d + ", p1[i].coefficient, p1[i].expx);
    printf("%dx^%d", p1[n1-1].coefficient, p1[n1-1].expx);


    printf("No of terms of second polynomial: ");
    scanf("%d",&n2);
    printf("Enter the terms of the second polynomial: ");
    for(int i=0; i<n2; i++){
        printf("coeff and exp of term #%d: ", i+1);
        scanf("%d %d",&p2[i].coefficient, &p2[i].expx);
    }

    printf("Polynomial 2: ");
    for(int i=0; i<n2-1; i++)
        printf("%dx^%d + ", p2[i].coefficient, p2[i].expx);
    printf("%dx^%d", p2[n2-1].coefficient, p2[n2-1].expx);


    // sum
    n3 = n1;
    for(int i=0; i<n3; i++){
        p3[i].coefficient = p1[i].coefficient;
        p3[i].expx = p1[i].expx;
    }

    for(int i = 0; i<n2; i++){
        int flag = 0;
        for(int j=0; j<n3; j++){
            if(p2[i].expx == p3[j].expx) {
                p3[j].coefficient += p2[i].coefficient;
                flag=1;
                break;
            }
        }
        if(flag == 0){
            p3[n3].coefficient = p2[i].coefficient;
            p3[n3].expx = p2[i].expx;
            n3++;
        }

    }

    for(int i = 0; i<n3-1; i++){
        for(int j = 0; j<n3-i-1; j++){
            if(p3[j].expx<p3[j+1].expx){
                temp = p3[j];
                p3[j] = p3[j+1];
                p3[j+1] = temp;
            }
        }
    }

    printf("\n\nPolynomial Sum: ");
    for(int i=0; i<n3-1; i++)
        if(p3[i].coefficient!=0)
            printf("%dx^%d + ", p3[i].coefficient, p3[i].expx);
    printf("%dx^%d", p3[n3-1].coefficient, p3[n3-1].expx);


}