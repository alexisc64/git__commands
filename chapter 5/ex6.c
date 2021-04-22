/*Write a program that takes an integer as the number of minutes, and outputs the total hours and minutes.*/
#include <stdio.h>

char line[100];

int minutes;
int hours;

int main()
{
	printf("Introduce a quantity of minutes: ");

	fgets(line, sizeof(line), stdin);
	sscanf(line, "%d", &minutes);

	hours = minutes / 60;

	minutes = minutes - (hours * 60);

	printf("%d hours %d minutes\n", hours, minutes);

	return 0;
}
