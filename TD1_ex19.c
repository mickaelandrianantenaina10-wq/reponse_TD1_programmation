/*
FONCTIONS_UTILISEES
VARIABLES
  a EST_DU_TYPE NOMBRE
  b EST_DU_TYPE NOMBRE
  i EST_DU_TYPE NOMBRE
  j EST_DU_TYPE NOMBRE
  k EST_DU_TYPE NOMBRE
DEBUT_ALGORITHME
  AFFICHER* "nous allons savoir si deux nombre son premier"
  AFFICHER "Entrer le premier nombre:"
  LIRE a
  AFFICHER "Entrer le deuxieme nombre:"
  LIRE b
  j PREND_LA_VALEUR 0
  POUR i ALLANT_DE 2 A a-1
    DEBUT_POUR
    SI (a%i==0) ALORS
      DEBUT_SI
      j PREND_LA_VALEUR j+1
      FIN_SI
    FIN_POUR
  SI (j==0) ALORS
    DEBUT_SI
    AFFICHER* "Le premier nombre est premier"
    FIN_SI
    SINON
      DEBUT_SINON
      AFFICHER* "Le premier nombre n'est pas premier"
      FIN_SINON
  k PREND_LA_VALEUR 0
  POUR j ALLANT_DE 2 A b-1
    DEBUT_POUR
    SI (b%j==0) ALORS
      DEBUT_SI
      k PREND_LA_VALEUR k+1
      FIN_SI
    FIN_POUR
  SI (k==0) ALORS
    DEBUT_SI
    AFFICHER* "Le deuxieme nombre est premier"
    FIN_SI
    SINON
      DEBUT_SINON
      AFFICHER* "Le deuxieme nombre n'est pas premier"
      FIN_SINON
FIN_ALGORITHME
*/
#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,i,j,k;
	printf ("nous allons savoir si deux nombre son premier\nEntrer le premier nombre:\n");
	scanf("%d",&a);
	printf("Entrer le deuxieme nombre:\n");
	scanf("%d",&b);
	j=0;
	for(i=2;i<a;i++)
		{
			if (a%i==0)
				{
					j=j+1;
				}
		}		
			if(j==0)
				{
					printf("Le premier nombre est premier\n");
				}
			else
				{
					printf("Le premier nombre n'est pas premier\n");
				}
	k=0;			
	for (j=2;j<b;j++)
		{
			if (b%j==0)
				{
					k=k+1;
				}
		}		
			if(k==0)
				{
					printf("Le deuxieme nombre est premier\n");
				}
			else 
				{
					printf("Le deuxieme nombre n'est pas premier\n");
				}
	return 0;	
}
