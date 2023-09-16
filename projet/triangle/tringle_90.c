#include <stdio.h>
#include <stdlib.h>

int main() {
    int n,i,j;
    printf("Donner un nombre n : ");
    scanf("%d", &n);
    
   /*
* * * * *
*     *
*   *
* *
*
   */ 
    
    
      for ( i = 1; i <= n; i++) {
        for ( j = 1; j <= n; j++) { 
			 if(j==1||i==1 || j==n-i+1 )printf("* ");
           else   printf("  ");
        }

        // Move to the next line
   printf("\n");
    }
       printf("---------------------------------\n");
/*
*
* *
*   *
*     *
* * * * *
*/
    for ( i = 1; i <= n; i++) {
        for ( j = 1; j <= n; j++) { 
			 if(j==1 || i==j ||i==n)printf("* ");
           else   printf("  ");
        }

        // Move to the next line
   printf("\n");
    }
   printf("---------------------------------\n");
   /*
* * * *
  *   *
    * *
      *
      */
  for ( i = 1; i <= n; i++) {
        for ( j = 1; j <= n; j++) { 
			 if(i==1 || j==n || i==j )printf("* ");
           else   printf("  ");
        }

      
   printf("\n");
    }
       printf("---------------------------------\n");
       /*
	    * 
      * *
    *   *
  *     *
* * * * *

	   */
         for ( i = 1; i <= n; i++) {
         	
        for ( j = 1; j <= n; j++) { 
			 if(j==n|| i==n || j==n-i+1 )printf("* ");
           else   printf("  ");
        }

      
   printf("\n");
    }
    return 0;
}

