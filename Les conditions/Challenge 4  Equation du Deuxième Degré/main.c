#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a, b, c, delta, x, x1, x2;
    printf("Veulliez entrer les valeurs de a, b et c :");
    scanf("%f %f %f", &a, &b, &c);
    delta = pow(b,2) - (4 * a * c);
    if (delta < 0)
        printf("Pas de solutions reelles");
    else if (delta == 0){
        x= (-b)/(2 * a);
        printf("l equation a une solution reelle double : x = %.2f\n", x);
    }
        else{
        x1 = (-b + sqrt (delta)) / (2 * a);
        x2 = (-b - sqrt (delta)) / (2 * a);
            printf("l'equation a deux solutions reelles :\n");
            printf("x1 = %.2f\n", x1);
            printf("x2 = %.2f\n", x2);
    }

        return 0;
}
