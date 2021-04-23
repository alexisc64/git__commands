// a program that verifies if you are a candidate for a scholarship
#include <stdio.h>

char line[100];

int grade;
char scholarship_status;

int main()
{
	printf("Enter your grade: ");

	fgets(line, sizeof(line), stdin);
	sscanf(line, "%d", &grade);

	if (grade < 85) {
		printf("scholarship unavailable");
	}
	else{
	 printf("scholarship available");
	}

	return 0;
}
