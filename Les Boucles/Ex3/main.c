#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age, S, i;
    printf("Veuillez entrer votre age :");
    scanf("%d",&age);
    S = 0;
    for (i=1;i<=age;i++)
            S=S+(500+(3*i));
    printf("Le compte d'Amal au %d eme anniv est : %.2d",age,S);

    return 0;
}
