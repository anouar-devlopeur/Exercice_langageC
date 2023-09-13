#include <stdio.h>
#include <stdlib.h>

int main() {
    int n,l,i,j;
    printf("Donner un nombre n : ");
    scanf("%d", &n);
  printf("Donner un nombre l : ");
    scanf("%d", &l);
    for ( i = 1; i <= n; i++) {
        for ( j = 1; j <= l; j++) {
			 if(i==1 || j==1 || i==n || j==l)printf("* ");
           else   printf("  ");
        }

        // Move to the next line
   printf("\n");
    }

    return 0;
}

