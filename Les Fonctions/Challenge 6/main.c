#include <stdio.h>

int fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        int a = 0, b = 1, c;
        for (int i = 2; i <= n; i++) {
            c = a + b;
            a = b;
            b = c;
        }
        return b;
    }
}

int main() {
    int nombre, resultat;

    printf("Entrez la position du terme de Fibonacci: ");
    scanf("%d", &nombre);

    if (nombre < 0) {
        printf("La position doit etre un entier positif.\n");
    } else {
        resultat = fibonacci(nombre);

        printf("Le terme %d de la suite de Fibonacci est: %d\n", nombre, resultat);
    }

    return 0;
}
