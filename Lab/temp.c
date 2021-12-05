// Write the algorithm and implement the program to generate a rank list of ‘n’ students based on the following information: Name, No. , Marks of 6 subjects. The rank list should contain the following fields: Name, Roll No. , Total marks, Rank. Also display the students obtained more than 60%.Implement the program using pointers to access the member variables.

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

struct student
{
	char name[20];
	int roll;
	int marks[6];
	int total;
	int rank;
};

void sort(int n, struct student a[20]){
    int i,j,k;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j].total<a[j+1].total){
                struct student temp;
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n; i++)
        a[i].rank=i+1;
}


void display(int n, struct student a[20]){
    int i;
    printf("Rank \tName\t RollNo \t Total Marks\n");
    for(i=0;i<n;i++){
        printf("%d\t%s\t\t%d\t\t%d\t\t\n",a[i].rank,a[i].name,a[i].roll,a[i].total);
    }
}

void display60above(int n, struct student a[20]){
    printf("\n Students who got 60%% and above:\n\n");
    for(int i=0;i<n;i++){
        if(a[i].total/6.0>=60)
            printf("%s\n",a[i].name);
    }
}

int main(){
    int n,i,j,k;
    struct student stdetails[20];
    printf("Enter the number of students: ");
    scanf("%d",&n);
    printf("Enter the details of %d students:\n",n);
    for(i=0;i<n;i++){
        struct student *ptr = &stdetails[i];
        printf("Enter the name of student %d: ",i+1);
        fflush(stdin);
        scanf("%s",ptr->name);
        printf("Enter the roll no. of student %d: ",i+1);
        scanf("%d",&ptr->roll);
        printf("Enter the marks of student %d: ",i+1);
        for(j=0;j<6;j++){
            scanf("%d",&ptr->marks[j]);
        }
        ptr->total=0;
        for(j=0;j<6;j++){
            ptr->total=ptr->total+ptr->marks[j];
        }
        ptr->rank=0;
        ptr++;
    }
    sort(n,stdetails);
    display(n,stdetails);
    display60above(n,stdetails);
}