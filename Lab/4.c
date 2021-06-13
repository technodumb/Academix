// armstrong numbers are numbers equal to the sum of cubes of its own digits.
// eg: 153 = 1^3 + 5^3 + 3^3

#include<stdio.h>
#include<math.h>

void main() {
    int num, sum=0, temp, nd;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    nd = log10(num)+1;
    while(temp > 0) {
        sum += pow(temp%10, nd);
        temp /= 10;
    }    
    if(sum==num)
        printf("%d is an Armstrong Number.", num);
    else
        printf("%d is not an Armstrong Number.", num);
}