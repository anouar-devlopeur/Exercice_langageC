#include <stdio.h>

int main() {
	int i,j;
    char T[15] = {'a', 'b', 'v', 'a', 'z', 'z', 'b', 'v', 'x', 'o', 'q', 'x', 'a', 'y', 'o'};

    // Triez le tableau en ordre alphab�tique
    int n = 15;
    for ( i = 0; i < n - 1; i++) {
    	int min=i;
        for ( j =  1; j < n; j++) {
            if (T[j+1] < T[i]) {
            	min=j;
            }
             char temp = T[i];
                T[i] = T[min];
                T[min] = temp;
        }
    }
  for (i = 0; i < 15; i++) {
        printf("%c ", T[i]);
    }
    // Affichez les caract�res tri�s sans r�p�tition
    printf("\nCaract�res tri�s en ordre alphab�tique sans r�p�tition : ");
    for (i = 0; i < n; i++) {
        // V�rifiez si le caract�re courant est diff�rent du pr�c�dent
        if (i == 0 || T[i] != T[i - 1]) {
            printf("%c ", T[i]);
        }
    }
    printf("\n");

    return 0;
}

