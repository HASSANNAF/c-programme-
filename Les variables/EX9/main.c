#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x1, x2, y1, y2, z1, z2, distance;
    printf("entrez les coordonnees du premiers points (x1, y1, z1): \n");
    printf("x1 = ");
    scanf("%f", &x1);
    printf("y1 = ");
    scanf("%f", &y1);
    printf("z1 = ");
    scanf("%f", &z1);
    printf("entrez les coordonnees du deuxiemes points (x2, y2, z2): \n");
    printf("x2 = ");
    scanf("%f", &x2);
    printf("y2 = ");
    scanf("%f", &y2);
    printf("z2 = ");
    scanf("%f", &z2);
    distance = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2) + pow((z2 - z1), 2));
    printf(" la distance entre les deux points est : %.2f\n", distance);




    return 0;
}
