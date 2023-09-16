#include <stdio.h>
#include <stdlib.h>

int main() {
    int n,i,j;
    printf("Entrez la valeur de n : ");
    scanf("%d", &n);

    char *pattern = malloc(2 * n * n * sizeof(char));
    if (pattern == NULL) {
        perror("Allocation de m�moire �chou�e");
        return 1;
    }

    int k = 0;
    for ( i = 0; i < n; ++i) {
        for ( j = 0; j <= i; ++j) {
            pattern[k++] = 'D';
            pattern[k++] = ' ';
        }
        pattern[k++] = '\n';
    }
    pattern[k] = '\0'; // Ajouter un caract�re nul pour terminer la cha�ne

    printf("Le motif d'�toiles est :\n%s", pattern);

    free(pattern); // Lib�rer la m�moire allou�e
    return 0;
}

