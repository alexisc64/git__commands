#include<stdio.h>

int main()
{
    int number, factorial = 1;

    printf("Please insert a number to get the factorial: ");
    scanf( "%d", &number);

    for(int i = 1; i <= number; i++) {
        factorial = factorial * i;
    }

    printf("%d", factorial);
    return 0;
}
