#include <stdio.h>

int main() {
	int i,j;
    char T[15] = {'a', 'b', 'v', 'a', 'z', 'z', 'b', 'v', 'x', 'o', 'q', 'x', 'a', 'y', 'o'};

    // Triez le tableau en ordre alphabétique
    int n = 15;
    for ( i = 0; i < n - 1; i++) {
    	int min=i;
        for ( j = i+ 1; j < n; j++) {
            if (T[j] < T[min]) {
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
    // Affichez les caractères triés sans répétition
    printf("\nCaractères triés en ordre alphabétique sans répétition : ");
    for (i = 0; i < n; i++) {
        // Vérifiez si le caractère courant est différent du précédent
        if (i == 0 || T[i] != T[i - 1]) {
            printf("%c ", T[i]);
        }
    }
    printf("\n");

    return 0;
}

