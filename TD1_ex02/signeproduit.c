/*FONCTIONS_UTILISEES
VARIABLES
  a EST_DU_TYPE NOMBRE
  b EST_DU_TYPE NOMBRE
  produit EST_DU_TYPE NOMBRE
DEBUT_ALGORITHME
  AFFICHER "Entrer une nombre non nul:"
  LIRE a
  AFFICHER "Entrer une nombre non nul:"
  LIRE b
  produit PREND_LA_VALEUR a*b
  SI (a==0  OU   b==0) ALORS
    DEBUT_SI
    AFFICHER "Erreur l'un des nombre que vous avez entrer est nul"
    FIN_SI
  SI (produit<0) ALORS
    DEBUT_SI
    AFFICHER "Le produit des 2 nombres est negatif"
    FIN_SI
  SI (produit>0) ALORS
    DEBUT_SI
    AFFICHER "Le produit des 2 nombres est positif"
    FIN_SI
FIN_ALGORITHME*/
#include <stdio.h>
int main()
{
	float a,b,produit;
	printf("Entrer une nombre non nul:");
	scanf("%f",&a);
	printf("Entrer une nombre non nul:");
	scanf("%f",&b);
	produit=a*b;
	if (a==0 || b==0)
	{
		printf("Erreur l'un des nombre que vous avez entrer est nul\n");
	}
	if (produit<0)
	{
		printf("Le produit des 2 nombres est negatif\n");
	}
	if (produit>0)
	{
		printf("Le produit des 2 nombres est positif\n");
	}
	return(0);
}
