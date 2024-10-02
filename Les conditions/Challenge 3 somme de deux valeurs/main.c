#include <stdio.h>
#include <stdlib.h>

int main()
{
int a, b, somme;
  printf("Veuillez saisir la premiere valeur entiere : ");
  scanf("%d", &a);
    printf("Veuillez saisir la deuxieme valeur entiere : ");
    scanf("%d", &b);

    somme = a + b;

    if (a == b) {
        somme *= 3;
    }

    printf("Le resultat est : %d\n", somme);

    return 0;
}
