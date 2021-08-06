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
        printf("\nDo you want to another employee? (Y/N): ");
        scanf("%s", &cn);
    }
    while(cn=='y' || cn=='Y');

    printf("\n\n\nEmployee Details:\n");
    printf("\t Name \t Salary \t Emp ID ");
    printf("\n____________________________________________________");
    for(int i=0; i<n; i++){
        printf("\n\t %d \t %s \t\t %f",employee[i].empid, employee[i].name, employee[i].salary);
    }
    printf("\n\n\n\n");
}
