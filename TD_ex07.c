/*
FONCTIONS_UTILISEES
VARIABLES
  t EST_DU_TYPE LISTE
  i EST_DU_TYPE NOMBRE
  max EST_DU_TYPE NOMBRE
DEBUT_ALGORITHME
  POUR i ALLANT_DE 0 A 2
    DEBUT_POUR
    AFFICHER "Entrer un nombre:"
    LIRE t[i]
    FIN_POUR
  max PREND_LA_VALEUR t[0]
  POUR i ALLANT_DE 1 A 2
    DEBUT_POUR
    SI (t[i]>max) ALORS
      DEBUT_SI
      max PREND_LA_VALEUR t[i]
      FIN_SI
    FIN_POUR
  AFFICHER* "Le maximum des nombres est:"
  AFFICHER max
FIN_ALGORITHME
*/
#include<stdio.h>
  int main()
  {
    float t[3],max;
    int i;
    for (i=0;i<3;i++)
      {
        printf ("Entrer un nombre:\n");
        scanf ("%f",&t[i]);
      }
    max=t[0];
    for (i=1;i<3;i++)
      {
        if (t[i]>max)
        {
          max=t[i];
        }
      }
    printf("Le maximum des nombres est:%f\n",max); 
    return(0);
  }
