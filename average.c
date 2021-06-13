#include<stdio.h>

void main() {
    float num, sum;
    int n;
    printf("Enter the total number of elements: ");
    scanf("%d", &n);
    printf("Enter the numbers:\n");
    for(int i = 0; i <n; i++) {
        printf("#%d: ", i+1);
        scanf("%f", &num);
        sum+=num;
    }
    printf("The average of the given numbers is %.2f\n", sum/n);
}