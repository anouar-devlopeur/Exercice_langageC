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
    int n,i,j,p;
    printf("Donner un nombre : ");
    scanf("%d", &n);
   //n=5
    for ( i = 1; i <= n*2-1; i++) {
        //espace 
        for ( j =1; j <= p; j++) {
            printf("*  ");
        }
        if(i<n) p++;
        else p--;
        

        // Move to the next line
        printf("\n");
    }
printf("---------------------------\n");
 
    return 0;
}
