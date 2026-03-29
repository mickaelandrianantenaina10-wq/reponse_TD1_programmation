/*TD 01: Programmation*
 * FONCTIONS_UTILISEES
VARIABLES
  n EST_DU_TYPE NOMBRE
DEBUT_ALGORITHME
  AFFICHER "entrer une nombre pour verifier son signe:"
  LIRE n
  SI (n==0) ALORS
    DEBUT_SI
    AFFICHER "ce nombre est nulle"
    FIN_SI
  SI (n>0) ALORS
    DEBUT_SI
    AFFICHER "ce nombre est positif"
    FIN_SI
    SINON
      DEBUT_SINON
      AFFICHER "ce nombre est negatif"
      FIN_SINON
FIN_ALGORITHME*/

#include<stdio.h>
int main()
{
	float n;
	printf("Entrer une nombre pour verifier son signe:");
	scanf("%f",&n);
	if (n==0)
	{
		printf("ce nombre est nul\n");
	}
	else if(n>0)
	{
		printf("ce nombre est positif\n");
	}
	else
	{
		printf("ce nombre est negatif\n");
	}
	return(0);
}

 


 


