#include <stdio.h>
#include <stdlib.h>
int main(){
	
	int n,s=0;
	int M,*p;
	
	printf("donner un nombre : ");
	scanf("%d",&n);
	
p=(malloc( n * sizeof(int));
	
  if (p == NULL) {
        printf("Erreur d'allocation de memoire.\n");
        return 1; // Exit with an error code
    }

    for (int i = 0; i < n; i++) {
        printf("Entrez la valeur %d : ", i + 1);
        scanf("%f", &p[i]);
    }

    // Print the values stored in the allocated memory
    printf("Les valeurs entrees sont :\n");
    for (int i = 0; i < n; i++) {
        printf("%f\n", p[i]);
    }

    // Free the allocated memory
    free(p);
	
	return 0;
	}
