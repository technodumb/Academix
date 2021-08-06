#include<stdio.h>

struct empdata {
    char name[50];
    int empid;
    float salary;
} employee[100];

void main(){
    int n=0;
    char cn='y';
    printf("\n\nEnter the details of the employees\n\n");
    do{
        printf("Employee #%d", n+1);
        printf("\n\t Name: ");
        // scanf("%s",employee[n].name);
        fflush(stdin);
        gets(employee[n].name);
        printf("\t Emp ID: ");
        scanf("%d",&employee[n].empid);
        printf("\t Salary: ");
        scanf("%f",&employee[n].salary);
        printf("\n");
        n++;
        printf("\nDo you want to another employee? (Y/N)\t\t:");
        scanf("%s", &cn);
    }
    while(cn=='y' || cn=='Y');

    printf("\n\n\nEmployee Details:\n\n");
    for(int i=0; i<n; i++){
        printf("Employee #%d", i+1);
        printf("\n\t Name: %s",employee[i].name);
        printf("\n\t Emp ID: %d",employee[i].empid);
        printf("\n\t Salary: %.2f",employee[i].salary);
        printf("\n\n");
    }
}