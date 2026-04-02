/*
FONCTIONS_UTILISEES
VARIABLES
  N EST_DU_TYPE NOMBRE
  s EST_DU_TYPE NOMBRE
DEBUT_ALGORITHME
  AFFICHER* "On va calculer le somme des nombres de 1 a N"
  AFFICHER "Entrer N:"
  LIRE N
  s PREND_LA_VALEUR (N*(N+1))/2
  AFFICHER "la somme des nombres de 1 a  "
  AFFICHER N
  AFFICHER* " est:"
  AFFICHER s
FIN_ALGORITHME
*/
#include <stdio.h>
  int main()
  {
    int N,s;
    printf("On va calculer le somme des nombres de 1 a N\nEntrer la valeur de N:\n");
    scanf("%d",&N);
    s=((N*(N+1))/2);
    printf ("La somme de 1 a %d est:\n",N);
    printf("%d\n",s);
    return(0);
  }
