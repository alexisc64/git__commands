/*rite a program that converts Centigrade to Fahrenheit.*/
#include <stdio.h>

char line[50];

float Celsius;
float Fahrenheit;

int main()
{
	printf("Celcius degrees: ");

	fgets(line, sizeof(line), stdin);
	sscanf(line, "%f", &Celsius);

	Fahrenheit = 9.0 / 5.0 * Celsius + 32;

	printf("%f°C are %f°F\n", Celsius, Fahrenheit);

	return 0;
}
