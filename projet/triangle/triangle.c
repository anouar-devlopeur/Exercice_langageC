#include <stdio.h>
#include <stdlib.h>
/*

      *
    * * *
  * * * * *
* * * * * * *
---------------------------
* * * * * * *
  * * * * *
    * * *
      *




*/
int main() {
    int n,i,j;
    printf("Donner un nombre : ");
    scanf("%d", &n);
   //n=5
    for ( i = 1; i <= n; i++) {
        //espace 
        for ( j =1; j <= n-i; j++) {
            printf("  ");
        }

        //affiche
        for ( j = 1; j <=2*i-1; j++) {
            printf("* ");
        }

        // Move to the next line
        printf("\n");
    }
//printf("---------------------------\n");
   for ( i = n-1; i >= 1; i--) {
        
        for ( j =1; j <= n-i; j++) {
            printf("  ");
        }

        
        for ( j = 1; j <=2*i-1; j++) {
            printf("* ");
        }

        // Move to the next line
        printf("\n");
    }
    return 0;
}
