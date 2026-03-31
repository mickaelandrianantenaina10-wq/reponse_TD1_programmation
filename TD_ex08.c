/*
FONCTIONS_UTILISEES
VARIABLES
  N EST_DU_TYPE NOMBRE
  i EST_DU_TYPE NOMBRE
DEBUT_ALGORITHME
  AFFICHER* "Nous allos afficher les nombre de 1 jusqu'a N"
  AFFICHER "Entrer la valeur de N"
  LIRE N
  AFFICHER "Les nombre de 1 a "
  AFFICHER N
  AFFICHER* "  sont:"
  POUR i ALLANT_DE 1 A N
    DEBUT_POUR
    AFFICHER* i
    FIN_POUR
FIN_ALGORITHME
*/
#include <stdio.h>
  int main ()
  {
    int N,i;
    printf ("Nous allons afficher les nombre de 1 jusqu'a N\n");
    printf ("Entrer la valeur de N :");
    scanf("%d",&N);
    printf("Les nombre de 1 a %d sont:\n",N);
    for (i=1;i<=N;i++)
      {
        printf("%d\n",i);
      }
      return(0);
  }
