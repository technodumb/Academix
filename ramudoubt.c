#include<stdio.h>
int main()
{
    int x,y;
    char z;
    x = 9; y = 4;
    for(z=0; z<=2; z++)
        {
            x=x<<1;
            y = (~y);
        }
    printf("%i  %i", x,y);
    return 0;
}