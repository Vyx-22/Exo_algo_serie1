#include <stdio.h>

int main(void){

    float temperatures[12];
    int i;
    float temperature_maximale, temperature_minimale;
    int position_maximum, position_minimum;

    //Saisie des temperatures
    for (i = 1; i <= 12; i++)
    {
        printf("Temperatue du mois %d : \n",i);
        scanf("%f",&temperatures[i]);
    }

   //Initialisation avec le premier élément
   temperature_maximale = temperatures[1];
   temperature_minimale = temperatures[1];
   position_maximum = 1;
   position_minimum = 1;

   //Recherche des extremums
   for ( i = 2; i <= 12; i++)
   {
        if (temperatures[i] > temperature_maximale)
        {
            temperature_maximale = temperatures[i];
            position_maximum = i;
        }
        else if (temperatures[i] < temperature_minimale)
        {
            temperature_minimale = temperatures[i];
            position_minimum = i;
        }
   }

   printf("Température maximale : %f (mois %d)\n",temperature_maximale,position_maximum);
   printf("Température minimale : %f (mois %d)\n",temperature_minimale,position_minimum);
   
    return 0;
    
}