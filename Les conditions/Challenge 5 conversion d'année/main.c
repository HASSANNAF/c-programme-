#include <stdio.h>

int main()
    int choix;
    int annee;
    int resultat;
    int joursDansAnnee = 365;
    printf("Entrez une annee (ex : 2024) : ");
    scanf("%d", &annee);


    printf("Que voulez-vous convertir cette annee en?\n");
    printf("1. Mois\n");
    printf("2. Jours\n");
    printf("3. Heures\n");
    printf("4. Minutes\n");
    printf("5. Secondes\n");
    printf("Entrez votre choix (1-5) : ");
    scanf("%d", &choix);

    // Conditions pour chaque choix
    if (choix == 1) {
        resultat = 12; // Une annee entière a toujours 12 mois
        printf("%d annee est egal a %d mois\n", annee, resultat);
    } else if (choix == 2) {
        resultat = joursDansAnnee; // Conversion en jours
        printf("%d annee est egal a %d jours\n", annee, resultat);
    } else if (choix == 3) {
        resultat = joursDansAnnee * 24; // Conversion en heures
        printf("%d annee est egal a %d heures\n", annee, resultat);
    } else if (choix == 4) {
        resultat = joursDansAnnee * 24 * 60; // Conversion en minutes
        printf("%d annee est egal a %d minutes\n", annee, resultat);
    } else if (choix == 5) {
        resultat = joursDansAnnee * 24 * 60 * 60; // Conversion en secondes
        printf("%d annee est egal a %d secondes\n", annee, resultat);
    } else {
        printf("Choix invalide. Veuillez entrer un nombre entre 1 et 5.\n");
    }

    return 0;
}
