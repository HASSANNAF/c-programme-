#include <stdio.h>
#include <stdlib.h>

int main()

    float Celsius;
    printf("Entrez la temperature en Celsius\ / ");
    scanf("%f",&Celsius);
    if (Celsius<0){
        printf("L'etat de l'eau est solide.\n",Celsius);
    } else if(Celsius >= 0 && Celsius < 100){
        printf("L'etat de l'eau est liquide.\n",Celsius);
    } else {
        printf("L'etat de l'eau est gazeux.\n",Celsius);
        }

    return 0;

