#include <stdio.h>
int main()
{
    printf("Enter a Charector (A to Z):");
    char vowel = getchar();
    switch (vowel)
    {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
    {
        printf("\t%c is a vowel", vowel);
        break;
    }
    default:
        printf("\t%c is a Consonants", vowel);
    }
    return 0;
}