#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;

    printf("Veuillez saisir un caractere:\n ");
    scanf(" %c", &c);

    switch (c) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("%c est une voyelle.\n", c);
            break;
        default:
            printf("%c n'est pas une voyelle.\n", c);
    }
    return 0;
}
