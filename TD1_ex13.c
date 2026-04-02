/*FONCTIONS_UTILISEES
VARIABLES
  N EST_DU_TYPE NOMBRE
  i EST_DU_TYPE NOMBRE
  f EST_DU_TYPE NOMBRE
DEBUT_ALGORITHME
  AFFICHER "Nous allons calcule le produit des nombres de 1 a N:"
  AFFICHER "entrer N"
  LIRE N
  f PREND_LA_VALEUR 1
  POUR i ALLANT_DE 1 A N
    DEBUT_POUR
    f PREND_LA_VALEUR f*i
    FIN_POUR
  AFFICHER "le produit des nombres est:"
  AFFICHER* f
FIN_ALGORITHME
*/
#include <stdio.h>
  int main()
  {
    int N,i,f;
    printf("Nous allons calcule le produit des nombres de 1 a N\n");
    printf ("entrer N:");
    scanf("%d",&N);
    f=1;
    for (i=1;i<=N;i++)
      {
        f=f*i;
      }
    printf ("le produit des nombres de 1 a %d est:\n",N);
    printf ("%d\n",f);
    return (0);
  }
