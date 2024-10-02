#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, reste;
    printf("Entrer un nombre entier :");
    scanf("%d",&n);
    printf("Le nombre inverse est : ");
    while(n != 0){
     reste=n%10;
     printf("%d", reste);
     n=n/10;
    }
    return 0;
}
