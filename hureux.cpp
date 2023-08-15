#include <stdio.h>

int main() {
    int heures, minutes;


    printf("Veuillez entrer l'heure actuelle (format 24 heures) : ");
    scanf("%d", &heures);
    printf("Veuillez entrer l'minutes actuelle (format minutes) : ");
    scanf("%d", &minutes);
 
    minutes += 5;

   
    if (minutes > 59) {
        heures += 1;
        minutes -= 60;
    }


    printf("Dans 5 minutes, il sera %d:%d\n", heures, minutes);

    return 0;
}
