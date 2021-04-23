#include <stdio.h>
void main(){

    int array[100], i, num;
    printf("Enter the size of the list: ");

    scanf("%d", &num);
    printf("Enter the elements of the list: ");

    for (i = 0; i < num; i++) {
        scanf("%d", &array[i]);
    }

    printf("Even numbers in the list are: \n") ;
    for (i = 0; i < num; i++) {
        if (array[i] % 2 == 0)
        {
            printf("-%d \t", array[i]);
        }
    }
}
