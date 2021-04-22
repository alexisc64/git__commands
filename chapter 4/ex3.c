/*Write a program to compute the area and perimeter of a rectanglewith a width of three inches and a height of five inches. What changes must be made to the program so that it works for a rectangle with a width of 6.8 inches and a length of 2.3 inches?*/

#include <stdio.h>

int main()
{
	float width;
	float height;
	float area;
	float perimeter;

	width = 6.8;
	height = 2.3;

	area = width * height;
	perimeter = (2 * width) + (2 * height);

	printf("The area of the rectangle is: %f inches\n", area);
	printf("The perimeter of the rectangle is: %f inches\n", perimeter);

	return 0;
}
