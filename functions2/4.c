
#include<stdio.h>
#include<string.h>

int main()
{
  char string[60];
  int lenght;

  printf("Please insert a word to reverse: ");
  scanf( "%s", string );

  lenght = strlen(string);

  for(int i = lenght - 1; i >= 0; i--) {
      printf("%c", string[i]);
  }
  return 0;
}
