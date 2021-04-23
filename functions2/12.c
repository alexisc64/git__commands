#include <stdio.h>
#include <string.h>

int main(){
    char stringtoreverse[100];
    int i, length;
    int flag = 0;

    printf("Enter a string:");
    scanf("%s", stringtoreverse);

    length = strlen(stringtoreverse);

    for(i=0;i < length ;i++){
        if(stringtoreverse[i] != stringtoreverse[length-i-1]){
            flag = 1;
            break;
   }
}

    if (flag) {
        printf("0 (%s is not a palindrome)", stringtoreverse);
    }
    else {
        printf("1 (%s is a palindrome)", stringtoreverse);
    }
    return 0;
}
