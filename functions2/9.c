#include<stdio.h>

int main()
{
    int number;

    printf("Insert a number to verify if it is prime: ");
    scanf( "%d", &number);

    if (number % 2 == 0) {printf("%d is prime", number);}
    else {printf("%d is not prime", number);}
    return 0;
}
