#include <stdio.h>

int main() {
    float a, b, c, d;
    float solution;

    printf("Veuillez entrer les valeurs de a, b, c et d : ");
    scanf("%f %f %f %f", &a, &b, &c, &d);

   
    if (a == 0 && c == 0) {
        if (b == d) {
            printf("Tous les nombres sont solutions.\n");
        } else {
            printf("Il n'y a pas de solution.\n");
        }
    } else if (a == c) {
        if (b == d) {
            printf("Tous les nombres sont solutions.\n");
        } else {
            printf("Il n'y a pas de solution.\n");
        }
    } else {
      
        solution = (d - b) / (a - c);
        printf("La solution de l'équation est x = %.2f\n", solution);
    }

    return 0;
}

