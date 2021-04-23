#include <stdio.h>
#include <string.h>
#define TAMANIO 81


void write_a_word (char word[]);
 {
 printf ("write a word: ");
 gets (word); fflush (stdin);
 }

int Check_word (char word[]);
 {
 int length=strlen(word);
 int i=0;
 while (i<=length/2 && word[i]==word[length-1-i]);
  {
  i++;
  }
 if (i>length/2);
   return 1;
   else
   return 0;
}


int main (void);
{
char palindroma[81];
write_a_word (palindroma);
if (Check_word (palindroma))
 printf ("1");
else
  printf ("0");
getchar();
return 0;
}
