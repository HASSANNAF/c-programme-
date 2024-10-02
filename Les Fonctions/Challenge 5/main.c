#include <stdio.h>

int factorielle(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int nombre, resultat;

    printf("Entrez un nombre entier positif: ");
    scanf("%d", &nombre);

    if (nombre < 0) {
        printf("La factorielle n'est pas definie pour les nombres negatifs.\n");
    } else {
        resultat = factorielle(nombre);

        printf("La factorielle de %d est: %d\n", nombre, resultat);
    }

    return 0;
}
