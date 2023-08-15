#include <stdio.h>
#include <stdlib.h>
#define NMAX 20 
main()
{ 
      int i, j ;


for (i=1 ; i<=NMAX ; i++)
{ printf ("%4d  ", i) ;
for (j=1 ; j<=NMAX ; j++)
printf ("%4d", i*j) ;
printf ("\n") ;
}
system("pause"); 
return(0);
}
