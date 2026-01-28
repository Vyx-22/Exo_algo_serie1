#include <stdio.h>

int main(void){
    int nombres[25];
    int occurrences [10];
    int i, valeur;

    // Initialisation du tableau des occurrences 
    for (i = 1; i <= 10; i++) {
        occurrences[i] = 0;
    }

    // Saisie des nombres
    for (i = 1; i <= 25; i++) {  
        printf("Entrez un nombre entre 1 et 10 : ");
        scanf("%d",&nombres[i]);
    }

    //Comptage des occurences
    for ( i = 1; i <= 25; i++)
    {
       valeur = nombres[i];
       occurrences[valeur] = occurrences[valeur] + 1;
    }

    //Affichage des résultats
    for ( i = 1; i <= 10; i++)
    {
        printf("Le nombre %d apparaît %d fois\n",i,occurrences[i]);
    }
    
    return 0;

}