/*FONCTIONS_UTILISEES
VARIABLES
  N EST_DU_TYPE NOMBRE
  i EST_DU_TYPE NOMBRE
  f EST_DU_TYPE NOMBRE
  s EST_DU_TYPE NOMBRE
  j EST_DU_TYPE NOMBRE
DEBUT_ALGORITHME
  AFFICHER* "Nous allons calculer S=1/1! + 1/2! + 1/3! +….+1/N!"
  AFFICHER "Entrer la valeur de N"
  LIRE N
  s PREND_LA_VALEUR 0
  POUR i ALLANT_DE 1 A N
    DEBUT_POUR
    f PREND_LA_VALEUR 1
    POUR j ALLANT_DE 1 A i
      DEBUT_POUR
      f PREND_LA_VALEUR f*j
      FIN_POUR
    s PREND_LA_VALEUR s+(1/f)
    FIN_POUR
  AFFICHER* "La valeur de S est :"
  AFFICHER s
FIN_ALGORITHME
*/
#include <stdio.h> 
  int main()
    {
      int i,j,f,N;
	float s;
      printf("Nous allons calculer S=1/1! + 1/2! + 1/3! +….+1/N!\nEntrer la valeur de N:\n");
      scanf("%d",&N);
      s=0;          
      for (i=1;i<=N;i++)
        {
          f=1;
          for (j=1;j<=i;j++)
		{
			f=f*j;
		}
       s=s+(1.0/f);
        }
       printf("La valeur de S est:%f\n",s);
       return 0;
    }
