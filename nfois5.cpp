#include <stdio.h>
#include<stdlib.h>
#include <math.h>
#define NFOIS 5
main() { int i ;  
 float x;
  float racx ; printf ("Bonjour\n") ; printf
("Je vais vous calculer %d racines carr�es\n", NFOIS) ; for (i=
0 ; i<NFOIS ; i++) { printf ("Donnez un nombre : ") ; scanf ("%f"
, &x) ; if (x < 0.0)
printf ("Le nombre %f ne poss�de pas de racine carr�e\n", x) ; else
{ racx = sqrt (x) ; printf ("Le nombre %f a pour racine carr�e : %f\n",
x, racx) ; } } printf ("Travail termin� - Au revoir\n \a") ;
system("pause");
}

