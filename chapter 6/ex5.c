//A leap year is any year divisible by 4, unless the year is divisible by 100, but not 400. Write a program to tell if a year is a leap year.

#include <stdio.h>

char line[100];
int year;

int isleap(int year)
{
	int leap = 0;

	if ((year % 4) == 0) {
		leap = 1;

		if ((year % 100) == 0 && (year % 400) != 0) {
			leap = 0;
		}
	}

	return leap;
}

int main()
{
	printf("Enter year: ");

	fgets(line, sizeof(line), stdin);
	sscanf(line, "%d", &year);

	if (isleap(year)) {
		printf("Year %d is a leap year\n", year);
	}
	else {
		printf("Year %d is not a leap year\n", year);
	}

	return 0;
}
