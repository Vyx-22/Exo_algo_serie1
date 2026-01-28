#include <stdio.h>

int main(void){

    int nombre[20];
    int i;
    int recherche;
    int trouve;
    int position;

     //Saisie des nombres
    for (i = 1; i <= 20; i++)
    {
        printf("Entrez la note %d :\n",i);
        scanf("%d",&nombre[i]);
    }
    
    // Demande du nombre à rechercher
        printf("Entrez le nombre rechercher : ");
        scanf("%d",&recherche);

    //Recherche
    trouve = 0;
    i = 1;
    while (i <= 20 && !trouve)
    {
        if (nombre[i] == recherche)
        {
           trouve = 1;
           position = i;
        }
    i++;
    }

    //Affichage du résultat
    if (trouve)
    {
       printf("Le nombre %d est présent à la position %d\n",recherche,position);
    }
    else
    {
        printf("Le nombre %d n'est pas présent dans le tableau\n",recherche);
    }

    return 0;
    
}