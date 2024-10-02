#include <stdio.h>
#include <stdlib.h>

int somme(int a , int b){
return a+b;
}
int main()
{
    int N1,N2,R;
    printf("Entrer le permier nombre :");
    scanf("%d",&N1);

printf("Entrer le deuxieme nombre :");
    scanf("%d",&N2);
    R = somme(N1,N2);
    printf("La somme de %d et %d est : %d\n",N1,N2,R);
        return 0;
}
