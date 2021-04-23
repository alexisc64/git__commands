#include <stdio.h>

int main(){
   float num1, num2, num3, largest;

   printf("Write three numbers: ");
   scanf("%f %f %f", &num1, &num2, &num3);

   if(num1 > num2 && num1 > num3) {largest = num1;}
   else if (num2 > num1 && num2 > num3) {largest = num2;}
   else {largest = num3;}

   printf("Largest number = %.2f",largest);
   return 0;
}
