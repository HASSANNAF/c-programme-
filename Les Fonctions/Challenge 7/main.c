#include <stdio.h>
#include <string.h>

void inverserChaine(char chaine[]) {
    int longueur = strlen(chaine);
    char temp;

    for (int i = 0; i < longueur / 2; i++) {
        temp = chaine[i];
        chaine[i] = chaine[longueur - 1 - i];
        chaine[longueur - 1 - i] = temp;
    }
}

int main() {
    char chaine[100];

    printf("Entrez une chaine de caracteres: ");
    scanf("%s", chaine);

    inverserChaine(chaine);

    printf("La chaine inverse est: %s\n", chaine);

    return 0;
}
