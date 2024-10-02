#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,i,resrultat=1;
    printf("Enter un nombre :\n");
    scanf("%d",&N);
    for(i=N;i>=1;i--){
        resultat=resultat*i;
    }
    printf("la factorielle de %d est  %d", N,resultat);
    return 0;
}
