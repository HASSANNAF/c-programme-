#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, S, i;
    do{
    printf("veuillez entrer un nombre :");
    scanf("%d", &N);
    }while(N<1);
    S=0;
    for(i=1;i<=N;i++){
        S=S+i;
    }
    printf("La  somme  est : %d", S);

    return 0;

}
