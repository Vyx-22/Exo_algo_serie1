#include <stdio.h>

int main(void){
    float notes[15];
    int i;
    float somme, moyenne;

    //Saisie les notes
    for (i = 1; i <= 15; i++)
    {
        printf("Entrez la note %d :\n",i);
        scanf("%f",&notes[i]);
    }

    
    //Calcul de la somme
    somme = 0;
    for (i = 0; i <= 15; i++)
    {
       somme = somme + notes[i];
    }

    //Calcul de la moyenne
    moyenne = somme /15;

    printf("La moyenne est %f :\n",moyenne); 

    return 0;

}