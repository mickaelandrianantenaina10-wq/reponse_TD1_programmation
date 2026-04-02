/*FONCTIONS_UTILISEES
VARIABLES
  N EST_DU_TYPE NOMBRE
  i EST_DU_TYPE NOMBRE
  s EST_DU_TYPE NOMBRE
DEBUT_ALGORITHME
  AFFICHER* "Nous allons calculer s=1 + 10 + 10^2+ ….+ 10^N"
  AFFICHER "Entrer la valeur de N:"
  LIRE N
  s PREND_LA_VALEUR 0
  POUR i ALLANT_DE 0 A N
    DEBUT_POUR
    s PREND_LA_VALEUR s+pow(10,i)
    FIN_POUR
  AFFICHER* "Le valeur de s est :"
  AFFICHER s
FIN_ALGORITHME
*/
#include<stdio.h>
#include<math.h>
  int main()
    {
      int N,i,s;
      printf("Nous allons calculer s=1 + 10 + 10^2+ ….+ 10^N\n");
      printf("Entrer la valeur de N:\n");
      scanf ("%d",&N);
      s=0;
      for (i=0;i<=N;i++)
        {
          s=s+pow(10,i);
        }
      printf("Le valeur de s est :%d\n",s);
      return 0;
    }
