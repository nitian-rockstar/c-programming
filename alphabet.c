#include <stdio.h>
int main () {
    char ch;
    printf("enter the character of alphabet :\n");
    scanf("%c",&ch);
    switch(ch) {
        case 'a':
        case 'A':
        case 'E':
        case 'e':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'U':
        case 'u':
        printf("the character %c enter is a vowel \n ",ch);
        break;
        default :
        printf("the character %c enter is a consonant \n",ch);
        break;

    }
    return 0;
}