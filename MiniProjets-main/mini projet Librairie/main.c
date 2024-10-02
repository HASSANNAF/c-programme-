#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
int main()
{
    //*le declaration des variables//*
char livre[100][100];
char auteur[100][100];
float prix[100];
int quantite[100];
char nom[100];
char lauteur[100];
char titrerecherche[100];
 char mise[100];
 char livresup[100];
 int S;
 S=0;
int x;
int i,m,g;
int y;
//*fin declaration//*
//1)menu
do{
menu:
printf("_____________________________Systeme de Gestion de Stock dans une Librairie____________________________\n");

printf("    1/ Titre du livre click.                             2/ Afficher tous les livres disponibles.\n\n");
printf("    3/ Rechercher un livre par son titre.                4/ Mettre a jour la quantite d un livre.\n\n");
printf("    5/ Supprimer un livre du stock.                      6/ Afficher le nombre total deS livres en stock.\n\n");
printf("____________________________________________________________________________________________________________ \n");
printf("Veuillez entrer le nombre de service :");
scanf("%d",&x);
//*fin de menu*//
switch(x){
    //*ajoute les livres //*
case 1:
    i=0;
    do{
    printf("Veuillez entrer le nom de livre:");
    scanf("%s",nom);
    //gets(nom);
    printf("Veuillez entrer le nom de lauteur:");
    scanf("%s",lauteur);
    //gets(lauteur);
    printf("Veuillez entrer le prix de livre ");
    scanf("%f",&prix[i]);
    printf("Veuillez entrer la quantite ");
    scanf("%d",&quantite[i]);
    strcpy(livre[i],nom);
    strcpy(auteur[i],lauteur);
    printf("Si tu veux entrer un autre livre click 1 :\n");
    printf("Sinon click 0 pour retourner au Menu:");
    scanf("%d",&y);
    i++;
    }while(y==1);
    //*fin d ajoute les livres//*
  goto menu;
    break;
    //*afficher les livres//*
case 2:
    printf("Le nom de livre |Le nom de l auteur | Le prix de livre |  La quantite | \n");
    for(int u=0;u<i;u++){
            printf("_______________________________________________________________________________________ \n");
    printf("%s",livre[u]);printf("                |");
    printf("%s",auteur[u]);printf("               |");
    printf("%.2f",prix[u]);printf("               |");
    printf("%.2d",quantite[u]);printf("           |");
    }
     printf("_______________________________________________________________________________________ \n");
printf("Retourner au Menu click 0");
scanf("%d",&y);
if(y==0)
//*fin d ajouter les livres//*
goto menu;
    break;
    //*mise ajour la quantite des livres//*
case 4:mise:
    printf("Veuillez entrer le nom de livre ");
    scanf("%s",mise);
for(int o=0;o<i;o++){
if(strcmp(livre[o],mise)==0){
    printf("Livre trouver \n");
    printf("Veuillez entrer la nouvelle quantite :");
    scanf("%d",&quantite[o]);
}
else{
    printf("livre n existe pas \n ");
     printf("_______________________________________________________________________________________ \n");
    goto mise;
    }//*fin de mise a jour la quantite//*
goto menu;
}
//*recherche un livre //*
case 3:
    recherche:
    printf("Veuillez entrer le nom de livre ");
    scanf("%s",titrerecherche);
    for(int b=0;b<i;b++){
        if(strcmp(livre[b],titrerecherche)==0)
        {
        printf("LE NOM DE LIVRE EST :%s\n",livre[b]);
        printf("LE NOM DE L AUTEUR :%s\n",auteur[b]);
        printf("LE PRIX DE LIVRE :%.2f\n",prix[b]);
        printf("LA QUANTITE DE LIVRE :%d \n",quantite[b]);
        }
        else
            printf("Livre Non trouver Ressayer");
            //*fin de recherche//*
             printf("_______________________________________________________________________________________ \n");
        goto menu;

    }
    //*le supresion de livre //*
case 5:
printf("Veuillez entrer le nom de livre que tu veux supprimer");
scanf("%s",livresup);
for(int g=0;g<i;g++){
if(strcmp(livre[g],livresup)==0){
    for(m=g;m<i;m++){
        strcpy(livre[m],livre[m+1]);
        strcpy(auteur[m],auteur[m+1]);
        prix[m]=prix[m+1];
        quantite[m]=quantite[m+1];}
i--;
        printf("Le Livre est supprimer");
break;
}
if(strcmp(livre[g],livresup)!=0)
         {printf("Ce Livre est introuvable");}
}
//*fin de supprimer le livre //*
 printf("_______________________________________________________________________________________ \n");
goto menu;
    break;
    //*total de quantite //*
case 6:
    for(int t=0;t<i;t++){
       S=quantite[t]+S;
    }
    printf("la quantite egal a %d",S);
    goto menu;
//*fin de total de quantite//*
}
}while(x!=0&& x>=1 &&x<=6);
    return 0;
    //*fin de mini projet//*
}
