#include <stdio.h>

int factorielle(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    return fact;

int main() {
    int N, resultat;

    printf("Entrez un N entier positif: ");
    scanf("%d", &N);

    if (N < 0) {
        printf("La factorielle n est pas definie pour les Nombres negatifs.\n");
    } else {
        resultat = factorielle(N);
        printf("La factorielle de %d est: %d\n", N, resultat);
    }

    return 0;
}
