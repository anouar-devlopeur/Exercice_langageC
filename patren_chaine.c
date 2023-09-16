#include <stdio.h>
#include <stdlib.h>

int main() {
    int n,i,j;
    printf("Entrez la valeur de n : ");
    scanf("%d", &n);

    char *pattern = malloc(2 * n * n * sizeof(char));
    if (pattern == NULL) {
        perror("Allocation de mémoire échouée");
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
    pattern[k] = '\0'; // Ajouter un caractère nul pour terminer la chaîne

    printf("Le motif d'étoiles est :\n%s", pattern);

    free(pattern); // Libérer la mémoire allouée
    return 0;
}

