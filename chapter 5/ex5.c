/*Write a program that takes hours and minutes as input, and then outputs the total number of minutes.*/
#include <stdio.h>

char line[50];

float hours;
unsigned int minutes;

int main()
{
	printf("Input quantity of hours: ");

	fgets(line, sizeof(line), stdin);
	sscanf(line, "%f", &hours);

	printf("Input quantity of minutes: ");

	fgets(line, sizeof(line), stdin);
	sscanf(line, "%d", &minutes);

	minutes = minutes + (hours * 60);

	printf("%d minutes\n", minutes);

	return 0;
}
