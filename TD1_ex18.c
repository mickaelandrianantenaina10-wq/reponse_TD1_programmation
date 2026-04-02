/*
FONCTIONS_UTILISEES
VARIABLES
  a EST_DU_TYPE NOMBRE
  b EST_DU_TYPE NOMBRE
  r EST_DU_TYPE NOMBRE
DEBUT_ALGORITHME
  AFFICHER* "calcul PGCD(a,b)"
  AFFICHER* "Entrer la valeur de a:"
  LIRE a
  AFFICHER* "Entrer la valeur de b:"
  LIRE b
  r PREND_LA_VALEUR a%b
  TANT_QUE (r!=0) FAIRE
    DEBUT_TANT_QUE
    a PREND_LA_VALEUR b
    b PREND_LA_VALEUR r
    r PREND_LA_VALEUR a%b
    FIN_TANT_QUE
  AFFICHER "Le PGCD entre les deux nombre :"
  AFFICHER b
FIN_ALGORITHME
*/
#include<stdio.h>
#include<math.h>
int main()
	{
		int a,b,r;
		printf("calcul PGCD(a,b)\nEntrer la valeur de a:\n");
		scanf("%d",&a);
		printf("Entrer la valeur de b\n");
		scanf("%d",&b);
		r=a%b;
		while (r!=0)
			{
				a=b;
				b=r;
				r=a%b;
			}
		printf("Le PGCD des deux nombres est:\n%d\n",b);
		return 0;
	}
