/*
FONCTIONS_UTILISEES
VARIABLES
  note1 EST_DU_TYPE NOMBRE
  note2 EST_DU_TYPE NOMBRE
  moyenne EST_DU_TYPE NOMBRE
  coeff1 EST_DU_TYPE NOMBRE
  coeff2 EST_DU_TYPE NOMBRE
DEBUT_ALGORITHME
  AFFICHER "Entrer la première note"
  LIRE note1
  AFFICHER "Entrer la coefficient de la matiere"
  LIRE coeff1
  AFFICHER "Entrer la deuxième note"
  LIRE note2
  AFFICHER "Entrer la coefficient de la matiere"
  LIRE coeff2
  moyenne PREND_LA_VALEUR (note1*coeff1+note2*coeff2)/(coeff1+coeff2)
  AFFICHER "le moyenne des deux notes est:"
  AFFICHER moyenne
FIN_ALGORITHME
*/
#include<stdio.h>
  int main()
  {
    float note1,note2,moyenne;
    int coeff1,coeff2;
    printf ("Entrer la première note:\n");
    scanf("%f",&note1);
    printf ("Entrer la coefficient de la matiere:\n");
    scanf("%d",&coeff1);
    printf("Entrer la deuxième note:\n");
    scanf("%f",&note2);
    printf ("Entrer la coefficient de la matiere:\n");
    scanf("%d",&coeff2);
    moyenne=(note1*coeff1+note2*coeff2)/(coeff1+coeff2);
    printf ("le moyenne des deux notes est:\n moyenne=%f\n",moyenne);
    return(0);
  }
