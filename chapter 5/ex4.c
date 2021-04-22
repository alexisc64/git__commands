/*Write a program that converts kilometers per hour to miles per hour.*/
#include <stdio.h>

char line[50];

float kilometers;
float miles;

int main()
{
	printf("Enter the km/h to convert them to mi/h: ");

	fgets(line, sizeof(line), stdin);
	sscanf(line, "%f", &kilometers);

	miles = kilometers * 0.6213712;

	printf("mi/h: %f\n", miles);

	return 0;
}
