#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a , b;
    printf("entrez le premier nombre reel a :");
    scanf("%f", &a);
    printf("entrez le deuxieme nombre reel b :");
    scanf("%f", &b);
    printf("a + b = %.2f\n", a + b);
    printf("a - b = %.2f\n", a - b);
    printf("a * b = %.2f\n", a * b);
    if (b !=0){
        printf("a / b = %.2f\n", a / b);
    } else {
        printf("Division par zero impossible.\n");
    }
    return 0;
}
