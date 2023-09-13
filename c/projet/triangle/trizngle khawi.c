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
        	if(i==n || j==1|| j==(2*i-1))
            printf("* ");
            else printf("  ")  ;
        }

        // Move to the next line
        printf("\n");
    }
printf("---------------------------\n");
 
    return 0;
}
