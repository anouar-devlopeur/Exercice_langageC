#include <stdio.h>
#include <stdlib.h>

int main() {
    int n,i,j;
    printf("Donner un nombre n : ");
    scanf("%d", &n);

    for ( i = 1; i <= n; i++) {
        for ( j = 1; j <= n; j++) { //j=5-1+1  => 5 => 5-5+1= 1
			 if(i==1 || j==1 || i==n || j==n || i==j || j==n-i+1)printf("* ");
           else   printf("  ");
        }

        // Move to the next line
   printf("\n");
    }

    return 0;
}

