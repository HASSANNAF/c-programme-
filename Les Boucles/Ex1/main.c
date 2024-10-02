#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    int N;
    float F,i;
    printf("veuillez entre un nombre :");
    scanf("%d", &N);
    F=1;
    if (N>0){
            for(i=2;i<=N;i++){
                F=F*i;

    }
    printf("la factorielle %d est : %.2f\n",N,F);
    }
    else if (N==0)
        printf("la factorielle est : 1");
    else
            printf("veuillez saisir un nombre positif");



    return 0;
}
