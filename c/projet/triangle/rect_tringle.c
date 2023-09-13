#include <stdio.h>
#include <stdlib.h>

int main() {
    int n,i,j;
    printf("Donner un nombre : ");
    scanf("%d", &n);

    for ( i = 1; i <= n; i++) {
        
        for ( j =1; j <= n-i; j++) {
            printf("  ");
        }

        
        for ( j = 1; j <=n; j++) {
            printf("* ");
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}
