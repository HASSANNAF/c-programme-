#include <stdio.h>
#include <stdlib.h>

int main()
{
    int B,E,R=1,i=0;
    printf("Entrer base :");
    scanf("%d",&B);
    printf("Entrer exposant :");
    scanf("%d",&E);
    for(i=0;i<E;i++){
       R*=B;
       }
    printf("%d ",R);
    return 0;
}
