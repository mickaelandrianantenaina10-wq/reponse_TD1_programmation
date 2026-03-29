/*FONCTIONS_UTILISEES
VARIABLES
  x EST_DU_TYPE NOMBRE
  a EST_DU_TYPE NOMBRE
  b EST_DU_TYPE NOMBRE
  c EST_DU_TYPE NOMBRE
DEBUT_ALGORITHME
  AFFICHER* "On va changer le valeur entre a et b"
  AFFICHER* "entrer un reel pour a"
  LIRE a
  AFFICHER "entrer un reel pour b"
  LIRE b
  x PREND_LA_VALEUR a
  a PREND_LA_VALEUR b
  b PREND_LA_VALEUR x
  AFFICHER* "Les nouveaux valeur de a et b sont:"
  AFFICHER "a="
  AFFICHER* a
  AFFICHER "b="
  AFFICHER b
  AFFICHER* "maintenant, on va changer les valeur entre a,b et c\n"
  AFFICHER "Entrer la valeur de c:"
  LIRE c
  a PREND_LA_VALEUR c
  c PREND_LA_VALEUR b
  b PREND_LA_VALEUR x
  AFFICHER* "Les nouveaux valeur sont:"
  AFFICHER "a="
  AFFICHER a
  AFFICHER "b="
  AFFICHER b
  AFFICHER "c="
  AFFICHER c
FIN_ALGORITHME
*/
#include <stdio.h>
int main()
{
	float x,a,b,c;
	printf("On va changer le valeur entre a et b\n");
	printf("entrer un reel pour a:");
	scanf("%f",&a);
	printf("entrer un reel pour b:");
	scanf("%f",&b);
	x=a;
	a=b;
	b=x;
	printf("Les nouveaux valeur de a et b sont:");
	printf("a=%f et b=%f\n",a,b);
	printf("maintenant, on va changer les valeur entre a,b et c\n");
	printf("Entrer la valeur de c:");
	scanf("%f",&c);
	a=c;
	c=b;
	b=x;
	printf("Les nouveaux valeur sont:\n");
	printf("a=%f et b=%f et c=%f",a,b,c);
return(0);
}
