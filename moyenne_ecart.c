#include <stdio.h>

int main(void){

    float notes[10];
    int i;
    float somme, moyenne;
    int nombre_au_dessus, nombre_en_dessous;

    //Saisie les notes
    for (i = 1; i <= 10; i++)
    {
        printf("Entrez la note %d :\n",i);
        scanf("%f",&notes[i]);
    }

    
    //Calcul de la somme
    somme = 0;
    for (i = 0; i <= 10; i++)
    {
       somme = somme + notes[i];
    }
    moyenne = somme /10;

    //Comptage au dessus et en desous de la moyenne
    nombre_au_dessus = 0;
    nombre_en_dessous = 0;
    for ( i = 1; i < 10; i++)
    {
     if (notes[i] > moyenne)
       {
        nombre_au_dessus = nombre_au_dessus + 1;
       }
     else if (notes[i] < moyenne)
        {
            nombre_en_dessous = nombre_en_dessous + 1;
        }
        
    }
    printf("Moyenne : %f\n",moyenne);
    printf("Notes au-dessus de la moyenne : %d\n",nombre_au_dessus);
    printf("Notes en dessous de la moyenne : %d\n",nombre_en_dessous);

    return 0;
}