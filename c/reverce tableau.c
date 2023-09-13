#include <stdio.h>



int main() {
    int taille,i;
    
    printf("Entrez la taille du tableau : ");
    scanf("%d", &taille);
    
    int tableau[taille];
    
    printf("Entrez les �l�ments du tableau :\n");
    for ( i = 0; i < taille; i++) {
        scanf("%d", &tableau[i]);
    }
    
      int debut = 0;
    int fin = taille - 1;
    
    while (debut < fin) {
        // �changer les �l�ments � la position 'debut' et 'fin'
        int temp = tableau[debut];
        tableau[debut] = tableau[fin];
        tableau[fin] = temp;
        
        debut++;
        fin--;
    }
    
    printf("Tableau invers� :\n");
    for ( i = 0; i < taille; i++) {
        printf("%d ", tableau[i]);
    }
    
    return 0;
}

