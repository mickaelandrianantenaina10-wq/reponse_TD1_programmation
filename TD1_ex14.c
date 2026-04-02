/*
FONCTIONS_UTILISEES
VARIABLES
  N EST_DU_TYPE NOMBRE
  i EST_DU_TYPE NOMBRE
  somme EST_DU_TYPE NOMBRE
DEBUT_ALGORITHME
  AFFICHER* "On va calculer le somme de l'expression suivant:1/1+1/2+1/3+...+1/N"
  AFFICHER "Entrer N"
  LIRE N
  somme PREND_LA_VALEUR 0
  POUR i ALLANT_DE 1 A N
    DEBUT_POUR
    somme PREND_LA_VALEUR somme+(1/i)
    FIN_POUR
  AFFICHER* "le somme de l'expression est :"
  AFFICHER somme
FIN_ALGORITHME
*/
#include<stdio.h>
  int main()
  {
    int N,i;
    float somme;
    printf("On va calculer le somme de l'expression suivant:1+/1+1/2+1/3+...+1/N\n");
    printf("Entrer N :");
    scanf("%d",&N);
    somme=0;
    for (i=1;i<=N;i++)
      {
        somme=somme+(1.0/i);
      //  printf ("%f",somme);
      }
      printf("le somme de l'expression est:\n");
     printf("%f\n",somme);
    return 0;
  }

