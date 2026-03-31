/*
 ALGORITHME
 delta reel
 x reel
 x1 reel
 a reel
 b reel
 c reel
 x3 reel
 i chaine
 DEBUT
 	* <-- signifie affectation *	
	 i <-- 'i'
	AFFICHER "Notre fonction est du type:ax²+bx+c=0"
	AFFICHER "Entrer la valeur de a"
	LIRE a
	AFFICHER "Entrer la valeur de b"
	LIRE b
	AFFICHER "Entrer la valeur de c"
	LIRE c
	delta <-- pow(b,2)-4*a*c
	SI (a==0 ET b!=0 ET c!=0) ALORS
		x <-- -(c/b);
		AFFICHER "La solution est x=",x
	SINON SI (a==0 ET b=0 ET c!=0) ALORS
		AFFICHER ""Ce n'est pas une equation car comme a et b sont nulle ==> 0x²+0x+"c"
	        AFFICHER "Alors que" c"!=0"
	SINON SI (a==0 ET b==0 ET c==0) ALORS
		AFFICHER "Il existe une affiniter de solution"
	SINON
			
		SI (delta = 0) ALORS
			x <-- -(b/(2*a))
			AFFICHER "La solution est:",x
		SINON SI (delta>0) ALORS
			x1=(-b-sqrt(delta))/(2*a);
          		x=(-b+sqrt(delta))/(2*a);
          		AFFICHER"les solution de l'equation sont:"
         		AFFICHER"x1=",x1,"et x2=",x
		SINON
			delta <-- -delta
			delta <-- sqrt (delta)
			AFFICHER "delta <0 donc les solution sont: "
			x3 <-- (2*a)
			AFFICHER "x1=(",-b-delta*i,")/",x3
			AFFICHER "x1=(",-b+delta*i,")/",x3
		fIN SI	
	FIN SI
FIN	
 */
#include <stdio.h>
#include <math.h>
int main()
{
  float delta,x,x1,a,b,c,x3;
  char i;
  int d,e,f,g,h;
  i='i';
  printf ("Notre fonction est du type:ax²+bx+c=0\n");
  printf ("entrer la valeur de a:");
  scanf ("%f",&a);
  printf("entrer la valeur de b:");
  scanf ("%f",&b);
  printf("entrer la valeur de c:");
  scanf ("%f",&c);
  delta=pow(b,2)-(4*a*c);
  if (a==0 && b!=0 && c!=0)
  {
    //bx+c=0
    x=-(c/b);
    printf("la solution est:\n");
    printf("x=%f",x);
  }
  else if (a==0 && b==0 && c!=0)
  {
    printf("Ce n'est pas une equation car comme a et b sont nulle ==> 0x²+0x+%f=0\n Alors que %f !=0\n",c,c);
  }
  else if (a==0 && b==0 && c==0)
    {
      printf("il existe une affinite de solution\n");
    }
    else
    {
       if (delta==0)
       {       
         x=-(b/(2*a));
         printf("le solution de l'equation est:\n");
         printf("x=%f",x);
       }
      else if (delta>0)
        {
          x1=(-b-sqrt(delta))/(2*a);
          x=(-b+sqrt(delta))/(2*a);
          printf("les solution de l'equation sont:\n");
          printf("x1=%f\n",x1);
          printf("x2=%f",x);
        }
        else
        {
          delta=-(delta);
          delta=sqrt(delta);
	  e=delta;
	  b=-b;
	  d=b;
	  h=a;
		  if (e%(2*h)==0 && d%(2*h)==0)
		  {
		  	f=e/(2*h);
			g=d/(2*h);
		       	printf("delta<0 donc:");
		       	printf("les solution de l'equation sont:\n");
			printf ("x1=%d+%d%c\n",g,f,i);
                        printf ("x2=%d-%d%c\n",g,f,i);

		  }
		   if  (e%(2*h)!=0 || d%(2*h)!=0)

		  {
	  
        	 	 printf("delta<0 donc:");
         		 printf("les solution de l'equation sont:\n");
         		 x3=(2*a);
         		 //x1=(-b-delta)/(x3);
			
			 printf ("%f",b);
         		 printf("x1=(%f-%f%c)/%f\n",b,delta,i,x3);
         		 printf("x2=(%f+%f%c)/%f\n",b,delta,i,x3);
		  }
        }
      }
      return(0);
}     
