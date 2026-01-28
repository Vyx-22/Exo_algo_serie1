#include <stdio.h>

int main(void){

    int nombre[15];
    int i;
    int recherche;
    int nombre_occurences;

    //Saisie des nombres
    for (i = 1; i <= 15; i++)
    {
        printf("Entrez la note %d :\n",i);
        scanf("%d",&nombre[i]);
    }

    // Demande du nombre à rechercher
        printf("Entrez le nombre à rechercher : ");
        scanf("%d",&recherche);


    //Recherche et affichage des position
    nombre_occurences = 0;
    printf("Positions où apparaît le nombre %d : ",recherche);
    for ( i = 1; i <= 15; i++)
    {
        if (nombre[i] == recherche)
        {
           printf("Position %d\n",i);
           nombre_occurences = nombre_occurences + 1;
        }
    
    }

        if (nombre_occurences == 0)
        {
            printf("Le nombre n'apparaît pas dans le tableau \n");
        }
        else
        {
            printf("Nombre total d'occurrences : %d\n",nombre_occurences);
        }
        

    return 0;
}