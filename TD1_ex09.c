/*
FONCTIONS_UTILISEES
VARIABLES
  N EST_DU_TYPE NOMBRE
  i EST_DU_TYPE NOMBRE
DEBUT_ALGORITHME
  AFFICHER* "Nous allons afficher les nombres paire entre 1 et N"
  AFFICHER "Entrer le valeure de N:"
  LIRE N
  AFFICHER "Les nombres paire entre 1 et "
  AFFICHER N
  AFFICHER* "  sont:"
  POUR i ALLANT_DE 1 A N
    DEBUT_POUR
    SI (i%2==0) ALORS
      DEBUT_SI
      AFFICHER* i
      FIN_SI
    FIN_POUR
FIN_ALGORITHME
*/
#include<stdio.h>
  int main()
  {
    int N,i;
    printf("Nous allons afficher les nombres paire entre 1 et N\n");
    printf("Entrer la valeur de N :");
    scanf ("%d",&N);
    printf ("Les nombres paire entre 1 et %d sont:\n",N);
    for (i=1;i<=N;i++)
    {
      if (i%2==0)
      {
        printf ("%d\n",i);
      }
    }
    return(0);
  }
  
