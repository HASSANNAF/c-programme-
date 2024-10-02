#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,i,somme=0;
    printf("Enter un nombre :\n");
    scanf("%d",&N);
    for(i=N;i>=1;i--){
        somme=somme+i;
    }
    printf("la somme des %d premiers nombres naturels est  %d\n", N,somme);
    return 0;
}
