#include <stdio.h>

int main()
{
    int uppercase = 0, lowercase = 0;
    char string[80];
    int i = 0;

    printf("Enter The String: ");
    fgets(string, sizeof(string), stdin);

    while (string[i] != '\0')
    {
        if (string[i] >= 'A' && string[i] <= 'Z')
            uppercase++;
        if (string[i] >= 'a' && string[i] <= 'z')
            lowercase++;
        i++;
    }

    printf("Uppercase letter(s): %d \nLowercase letter(s): %d", uppercase, lowercase);
    return 0;
}
