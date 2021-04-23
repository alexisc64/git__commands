#include <stdio.h>
#include <ctype.h>



int isVowel(char letter) {

    char letterInCapital = (char) toupper(letter);
    return letterInCapital == 'A' ||
           letterInCapital == 'E' ||
           letterInCapital == 'I' ||
           letterInCapital == 'O' ||
           letterInCapital == 'U';
}

int countConsonant(char string[]) {
    int consonant = 0;// keep number of consonant
    int i = 0;//index to advance in string
    while (string[i]) {
        // if is not a vowel
        if (isalpha(string[i]) && !isVowel   (string[i])) {
            consonant++;

        }
        i++;
    }
    return consonant;
}

int main() {
    char string[] = "alexis";
    int consonant = countConsonant(string);
    printf("string '%s' \nhave %d consonant", string, consonant);
    return 0;
}
