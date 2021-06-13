#include<stdio.h>
#include<math.h>

void main() {
    float p, a = 0, x;
    scanf("%f",&p);
    for(x=1; x<=p; x++){
        a = a + (1/pow(x,3));
        printf("%f\n",a);
    }
    printf("%f",a);

}