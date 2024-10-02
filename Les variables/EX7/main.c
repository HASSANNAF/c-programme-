#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nombre1, nombre2, nombre3, moyenne;
    int ponderation1 = 2, ponderation2 = 3, ponderation3 = 5;
    printf("entrez le premier nombre : ");
    scanf("%f", &nombre1);
    printf("entrez le deuxieme nombre : ");
    scanf("%f", &nombre2);
    printf("entrez le trisieme nombre : ");
    scanf("%f", &nombre3);
    moyenne = (nombre1 * ponderation1 + nombre2 * ponderation2 + nombre3 * ponderation3);
    printf("la moyenne ponderee est : %.2f\n", moyenne);

    return 0;
}
