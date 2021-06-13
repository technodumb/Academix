#include<stdio.h>
#include<math.h>
// #include<conio.h>

void main() {
    float a, b, c, s, area;
    //to find the area of a triangle given only the sides,
    // we can use the heron's formula
    printf("Enter the sides of the triangle: \n");
    scanf("%f %f %f", &a, &b, &c);
    // according to heron's formula, Area = square root of (s(s-a)(s-b)(s-c)) where s is the semiperimeter of the triangle
    s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("The area of the triangle is %.2f\n", area);
}