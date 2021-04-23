#include<stdio.h>

int main()
{
   char s1[50], s2[50];
   int x;
   int y;
   int length;
   int flag=0;

   printf("Enter a string: ");
   fgets(s1,sizeof(s1),stdin);
   printf("Enter another string: ");
   fgets(s2,sizeof(s2),stdin);

   for(x=0;s1[x]!='\0';x++);
   length=x;
   for(y=0;s2[y]!='\0';y++);

   if(x!=y)
   printf("1 (Strings has not the same lenght).");
   else printf("0 (Strings has the same lenght).");

   return 0;
 }
