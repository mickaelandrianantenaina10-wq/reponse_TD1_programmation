/*FONCTIONS_UTILISEES
VARIABLES
  note1 EST_DU_TYPE NOMBRE
  somme EST_DU_TYPE NOMBRE
  note2 EST_DU_TYPE NOMBRE
  moyenne EST_DU_TYPE NOMBRE
DEBUT_ALGORITHME
  AFFICHER* "calcul somme et la moyenne de deux note:"
  AFFICHER* "Entrer le premier note:"
  LIRE note1
  AFFICHER "Entrer la deuxieme note"
  LIRE note2
  somme PREND_LA_VALEUR note1+note2
  AFFICHER* "la somme des 2 note est:"
  AFFICHER* somme
  moyenne PREND_LA_VALEUR somme/2
  AFFICHER* "Le moyenne de 2 note est:"
  AFFICHER moyenne
FIN_ALGORITHME
*/
#include <stdio.h>
int main()
{
	int note1,note2,somme;
	float moyenne;
	printf("calcul somme et la moyenne de deux note:\n");
	printf( "Entrer le premier note:");
	scanf("%d",&note1);
	printf("Entrer la deuxieme note:");
	scanf("%d",&note2);
	somme=note1+note2;
	moyenne=somme/2;
	printf("Le somme et la moyenne des 2 notes sont:\n");
	printf("somme=%d et moyenne=%f\n",somme,moyenne);
	return(0);
}
