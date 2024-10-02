#include <stdio.h>
#include <stdlib.h>

int main()
{
    float Nombre;
    printf("Veuillez entrer un nombre :");
    scanf("%f", &Nombre);
    if (Nombre < 0){
        printf("%.2f Le nombre est negatif.\n", Nombre);
    }else if (Nombre > 0){
        printf("%.2f Le nombre est positif .\n", Nombre);
        }else{
            printf("Le NOMBRE EST EGAL A ZERO .");
        }
    return 0;
}
