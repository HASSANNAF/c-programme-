#include <stdio.h>
#include <stdlib.h>
void TM (int a){
int i;
printf("\n La table de multiplication de %d est :\n",a);
for (i = 0 ; i <= 10 ; i++){
    printf("%d x %d = %d \n",a,i,a*i);
}
}
int main()
{
    int N ;
    printf("Veuillez enter la valeur de N :");
    scanf("%d",&N);
    TM(N);
    TM(6);

    return 0;
}
