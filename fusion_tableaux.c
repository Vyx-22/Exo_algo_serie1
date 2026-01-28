#include <stdio.h>
int main(void){


int tableau1[5];
int tableau2[5];
int tableau_fusion[10];
int i;

// Saisie du premier tableau
printf("Saisie du premier tableau :");
for (i = 1; i <= 5; i++)
{
    printf("Entrez l'élément %d :\n",i);
    scanf("%d",&tableau1[i]);
}

// Saisie du deuxième tableau
printf("Saisie du deuxième tableau :");
for (i = 1; i <= 5; i++)
{
    printf("Entrez l'élément %d :\n",i);
    scanf("%d",&tableau2[i]);
}

//Fusion : copie du premier tableau
for ( i = 1; i <= 5; i++)
{
    tableau_fusion[i] = tableau1[i];
}

//Fusion : copie du deuxième tableau
for ( i = 1; i <= 5; i++)
{
    tableau_fusion[i + 5] = tableau2[i];
}

// Affichage du tableau fusionné
printf("Tableau fusionné :\n");
for ( i = 1; i <= 10; i++)
{
    printf("%d\n",tableau_fusion[i]);
}


return 0;
}