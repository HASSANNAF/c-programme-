#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nombre;
    printf("entrer un nombre entier : \n");
    scanf("%d", &nombre);
    if (nombre % 2 == 0){
        printf("%d est un nombre pair. \n", nombre);
    } else {
        printf("%d est un nombre impair. \n", nombre);
    }

    return 0;
}
