#include <stdio.h>

int main() {
    int code = 1234;
    int guess;
    int correctCount = 0;
    int codeDigits[4];
    int guessDigits[4];
    int i;

    printf("Entrez un nombre à quatre chiffres : ");
    scanf("%d", &guess);

    // Extraire les chiffres du code
    for (i = 3; i >= 0; i--) {
        codeDigits[i] = code % 10;
        code /= 10;
    }

    // Extraire les chiffres de la supposition
    for (i = 3; i >= 0; i--) {
        guessDigits[i] = guess % 10;
        guess /= 10;
    }

    // Vérifier le nombre de chiffres corrects
    for (i = 0; i < 4; i++) {
        if (guessDigits[i] == codeDigits[i]) {
            correctCount++;
        }
    }

    printf("Nombre de chiffres corrects : %d\n", correctCount);

    return 0;
}
