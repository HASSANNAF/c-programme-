#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
 float a, b, c, haz, 7at;
 float MG ;
    printf("entrez les coordonnees du premiers points (a, b, c): \n");
    printf("a = ");
    scanf("%f", &a);
    printf("b = ");
    scanf("%f", &b);
    printf("c = ");
    scanf("%f", &c);
    haz =(a * b * c);
    7at = (1.0 / 3.0);
    MG= pow(haz,7at);
    printf(" la Moyenne geometrique des trois nombres est : %.2f\n", MG);

        return 0;
}
