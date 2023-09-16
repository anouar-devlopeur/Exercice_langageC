#include <stdio.h>
#include <stdlib.h>
int main(){
	
	int n,i;
	float M,*p,s=0;
	
	printf("donner un nombre : ");
	scanf("%d",&n);
	
p=malloc( n * sizeof(float));
	   
  if (p == NULL) {
        printf("Erreur d'allocation de memoire.\n");
        return 1; // Exit with an error code
    }

    for ( i = 0; i < n; i++) {
        printf("Entrez la valeur %d : ", i + 1);
        scanf("%f", &p[i]);
    }

    // Print the values stored in the allocated memory
    printf("Les valeurs entrees sont :\n");
    for ( i = 0; i < n; i++) {
        printf("%.0f\n", p[i]);
    }

 printf("Les valeurs SOMME sont :\n");
    for ( i = 0; i < n; i++) {
        s+= *(p+i);
       // s+= p[i];
    }
  printf(" smme est : %.0f\n", s);
  printf(" le moyen est :  %.0f\n", s/n);
    // Free the allocated memory
    free(p);
	
	return 0;
	}
