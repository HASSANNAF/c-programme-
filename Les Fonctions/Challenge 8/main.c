#include <stdio.h>

int estPair(int n) {
    if (n % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int N;


     printf("Entrez un nombre entier: ");
     scanf("%d", &N);
    if (estPair(N)) {
     printf("%d est un nombre pair.\n", N);
    } else {
     printf("%d est un nombre impair.\n", N);
    }

    return 0;
}
