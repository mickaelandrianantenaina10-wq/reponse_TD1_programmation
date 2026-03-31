/*FONCTIONS_UTILISEES
VARIABLES
  N EST_DU_TYPE NOMBRE
  i EST_DU_TYPE NOMBRE
DEBUT_ALGORITHME
  AFFICHER "Entrer le nombre pour trouver son diviseurs:"
  LIRE N
  AFFICHER* "Les diviseurs du nombre sont :"
  POUR i ALLANT_DE 1 A N-1
    DEBUT_POUR
    SI (N%i==0) ALORS
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
    printf("Entrer le nombre pour trouver son diviseurs:");
    scanf ("%d",&N);
    printf ("Les diviseurs du nombre sont:\n");
    for (i=1;i<N;i++)
      {
        if (N%i==0)
          {
            printf ("%d\n",i);
          }
      }
      return(0);
  }
