#include <stdio.h>

int main(void){

float notes[20];
int i;
float somme, moyenne_classe;

//Saisie des notes 
for ( i = 1; i <= 20; i++)
{
    printf("Entrez la note de l'étudiant %d : ",i);
    scanf("%f",&notes[i]);
}

 //Calcul de la moyenne de la classe
    somme = 0;
    for (i = 0; i <= 20; i++)
    {
       somme = somme + notes[i];
    }
    moyenne_classe = somme /20;

    printf("Moyenne de la classe %f :\n",moyenne_classe);

// Affichage des notes et mentions
for ( i = 1; i <= 20; i++)
{
    printf("Etudiant %d -Note : %f -Mention : ",i,notes[i]);
    if (notes[i] >= 16 )
    {
        printf("Très Bien \n");
    }
    else if (notes[i] >= 14)
    {
        printf("Bien\n");
    }
    else if (notes[i] >= 12)
    {
        printf(" Assez Bien\n");
    }
    else if (notes[i] >= 10)
    {
        printf("Passable\n");
    }
    else 
        printf("Insuffisant \n");
    
}


    return 0;
}