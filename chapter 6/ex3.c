//Modify the previous program to print a + or - after the letter grade, based on the last digit of the score. The modifiers are listed in Table 6-4.For example, 81=B-, 94=A, and 68=D+. Note: An F is only an F. There is no F+ or F-.

#include <stdio.h>

char line[100];

int percentage;
char grade;
char sign;

int main()
{
	sign = ' ';

	printf("Enter the percentage: ");

	fgets(line, sizeof(line), stdin);
	sscanf(line, "%d", &percentage);

	if (percentage >= 0 && percentage <= 60) {
		grade = 'F';
	}
	else if (percentage >= 61 && percentage <= 70) {
		grade = 'D';

		if (percentage >= 61 &&  percentage <= 63) {
			sign = '-';
		}
		else if (percentage >= 68) {
			sign = '+';
		}
	}
	else if (percentage >= 71 && percentage <= 80) {
		grade = 'C';

		if (percentage >= 71 &&  percentage <= 73) {
			sign = '-';
		}
		else if (percentage >= 78) {
			sign = '+';
		}
	}
	else if (percentage >= 81 && percentage <= 90) {
		grade = 'B';

		if (percentage >= 81 &&  percentage <= 83) {
			sign = '-';
		}
		else if (percentage >= 88) {
			sign = '+';
		}
	}
	else if (percentage >= 91 && percentage <= 100) {
		grade = 'A';

		if (percentage >= 91 &&  percentage <= 93) {
			sign = '-';
		}
		else if (percentage >= 98) {
			sign = '+';
		}
	}

	printf("Grade: %c%c\n", grade, sign);

	return 0;
}
