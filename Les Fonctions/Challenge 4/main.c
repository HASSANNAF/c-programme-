#include <stdio.h>
#include <stdlib.h>

int min(int a , int b){
if (a<b){
    return a;
}else{
return b;
}
}
int main()
{
    int N1,N2,R;
    printf("Entrer le permier nombre :");
    scanf("%d",&N1);
    printf("Entrer le deuxieme nombre :");
    scanf("%d",&N2);
    R = min(N1,N2);
    printf("Le plus petit entre %d et %d est : %d\n",N1,N2,R);
        return 0;
}
