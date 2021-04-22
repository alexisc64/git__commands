/*Write a program that prints the perimeter of a rectangle given its height and width. */
#include <stdio.h>

char line[100];

float width;
float height;
float perimeter;

int main()
{
	printf("Introduce width of the rectangle in cm: ");
	fgets(line, sizeof(line), stdin);
  sscanf(line, "%f", &width);

  printf("Introduce heigth of the rectangle in cm: ");
	fgets(line, sizeof(line), stdin);
  sscanf(line, "%f", &height);

	perimeter = 2 * (width + height);

	printf("The perimeter of the rectangle is: %f cm^2\n", perimeter);

	return 0;
}
