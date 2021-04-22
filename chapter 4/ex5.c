/*Write a program that deliberately makes the following mistakes:*/
//· Prints a floating-point number using the %d conversion.
//· Prints an integer using the %f conversion.
//· Prints a character using the %d conversion.

#include <stdio.h>

int main()
{
  float x = 1.23;
	printf("%d\n", x);

  int y = 7;
	printf("%f\n", y);

  char z = 'D';
	printf("%d\n", z);

	return 0;
}
