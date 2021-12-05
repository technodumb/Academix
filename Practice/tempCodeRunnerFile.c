// define a structure that can describe a hotel. It shoudl have members that include the name, grade and room charge. Write a program to print out hotels of a griven grade in the order of charges.

#include<stdio.h>

struct hotel{
    char name[20];
    char grade;
    float room_charge;
};

main(){
    struct hotel h[10];
    int n;
    printf("Enter the number of hotels: ");
    scanf("%d", &n);
    printf("Enter the details of the hotels: \n");
    for(int i=0; i<n; i++){
        printf("\nName: ");
        gets(h[i].name);
        printf("Grade: ");
        scanf("%c", &h[i].grade);
        printf("Room charge: ");
        scanf("%f", &h[i].room_charge);
    }
    // bubble sort room by room charges

    for(int i=0; i<n; i++){
        for(int j=0; j<n-1; j++){
            if(h[j].room_charge > h[j+1].room_charge){
                struct hotel temp = h[j];
                h[j] = h[j+1];
                h[j+1] = temp;
            }
        }
    }
    char g;
    printf("\n\nEnter the grade of the hotel to be printed: ");
    scanf("%c", &g);
    printf("\n\nThe hotels with grade %c are: \n", g);
    for(int i=0; i<n; i++){
        if(h[i].grade == g){
            printf("\nName: %s\nGrade: %c\nRoom charge: %.2f\n", h[i].name, h[i].grade, h[i].room_charge);
        }
    }    
}