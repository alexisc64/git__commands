a#include <stdio.h>
#include <string.h>

void invertString(char string[])
{
    int length = strlen(string);
    int i;
    for (i = 0; i < strlen(string) / 2; i++)
    {
        char temporal = string[i];
        string[i] = string[length - i - 1];
        string[length - i - 1] = temporal;
    }
}

int main(void) {
	char string[] = "Hello";
	printf("Normal: %s\n", string);
	// to invert
	invertString(string);
	printf("Inverted: %s\n", string);
  return 0;
}
