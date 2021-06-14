#include<stdio.h>
#include<math.h>

void main() {
    // declaring an input variable and variable to check if the number is prime 
    int num, prime=1;
    // inputting the number
    printf("Enter any number: ");
    scanf("%d", &num);
    
    // running a loop from 2 to its sqroot to check if there are any numbers divisible by it.
    // running till sqroot for more efficiency
    for (int i = 2; i <=sqrt(num); i++)
        if(num%i==0){
            // if a factor is found, prime reduces to 0
            prime--;
            break;
        }
    // if a number is found to be below 2, its automatically not prime.
    if(num<2)
        prime=0;
    if(prime)
        printf("%d is prime.", num);
    else
        printf("%d is not prime.", num);
    printf("\n");
}