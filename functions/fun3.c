#include <stdio.h>
#include <string.h>

char a [ ]={" casa"};
char b [ ]={" caza"};
int i, differences=0;


int main(){

  if (strlen (a)>strlen (b))
    printf ("string 'b' is shorter than 'a'");
  else  if (strlen (a)<strlen (b))
      printf ("string 'a' is shorter than 'b'");
  else {
      for(i=0;i <strlen(a);i++){
        if(a[i] != b [i]){
          differences++;
          printf("they are different in the position %i\n", i);
        }
  }
    if(differences > 0)
      return 0;
    else
      printf ("they are equal\n");
}

}
