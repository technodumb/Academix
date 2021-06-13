#include<stdio.h>
void main(){
    const float pi = 3.1415;
    float radius;
    printf("Enter the radius: ");
    scanf("%f", &radius);
    printf("The area of the circle is %.04f", pi*radius*radius);
}