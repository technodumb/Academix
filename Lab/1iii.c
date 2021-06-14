#include<stdio.h>
void main(){
    const float pi = 3.14159;
    float radius;
    printf("Enter the radius: ");
    scanf("%f", &radius);
    printf("The area of the circle is %.02f\n", pi*radius*radius);
}