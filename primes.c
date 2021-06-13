#include <stdio.h>
#include <math.h>

void main() {
    int flag = 0;
    for(int i = 2; i <=100; i++) {
        flag = 0;
        for(int j = 2; j <= sqrt(i); j++) 
            if (i%j==0) 
                flag = 1;
        if(!flag)
            printf("%d\n", i);
    }
}