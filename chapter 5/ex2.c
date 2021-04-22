/*Write a program to calculate the volume of a sphere.*/
#include <stdio.h>

const float Pi = 3.1416;

char line[50];

float volume;
float radius;

int main()
{
	printf("Enter the radius of the sphere in cm: ");

	fgets(line, sizeof(line), stdin);
	sscanf(line, "%f", &radius);

	volume = 4.0 / 3.0 * Pi * (radius * radius * radius);

	printf("The volume of the sphere is: %f cm^3\n", volume);

	return 0;
}
