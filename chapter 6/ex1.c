//Write a program to find the square of the distance between two points.

#include <stdio.h>
#include <math.h>

char line[100];
float distance;
float square_of_distance;
float actual_distance;

int main()
{
	printf("Enter the distance between the two points in meters: ");

	fgets(line, sizeof(line), stdin);
	sscanf(line, "%f", &distance);

	square_of_distance = distance * distance;

	printf("The square of the distance is: %f meters\n", square_of_distance);

	actual_distance = sqrt(square_of_distance);

	printf("The actual distance is: %f meters\n", actual_distance);

	return 0;
}
