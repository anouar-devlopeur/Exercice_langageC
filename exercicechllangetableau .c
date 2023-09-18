#include <stdio.h>
#include <stdbool.h>
#include <string.h>

static int i, j;


int main() {
    char nom[20][30];
    float note[20];
    int n,count=0,sommeDesNotes=0;

    printf("Donner un nombre : ");
    scanf("%d", &n);
    
    //function
    //affiche 
    void affiche(){
	   for (i = 0; i < n; i++) {
        printf("La personne %d :\n", i + 1);
        printf("Nom : %s\n", nom[i]);
        printf("Note : %.2f\n", note[i]);
       
    }
   }
  
    
//Ajouter
    for (i = 0; i < n; i++) {
        printf("Donner un nom : ");
        scanf("%s", nom[i]);
        printf("Donner une note : ");
        scanf("%f", &note[i]);
         count++;
        sommeDesNotes+=note[i];
    }
//Afficher
           affiche();
//Modifier
/*
 char nomRecherche[30];
    printf("\nEntrez le nom pour modifier la note : ");
    scanf("%s", nomRecherche);
    
    for (i = 0; i < n; i++) {
       if(strcmp(nom[i],nomRecherche)==0)
        printf("Donner une note : ");
        scanf("%f", &note[i]);
        printf("modifier le note \n");
        break;
        
    }
  affiche();
 //supprimer 
   char nomsupperimer[30];
    printf("\nEntrez le nom pour supprimer  : ");
    scanf("%s", nomsupperimer);
    
    for (i = 0; i < n; i++) {
   if (strcmp(nom[i], nomsupperimer) == 0) {
            printf("\nSupprimer la personne : %s\n", nom[i]);
            for (j = i; j < n - 1; j++) {
                strcpy(nom[j], nom[j + 1]);
                note[j] = note[j + 1];
            }
            n--;
            break;
        }
        
    }
    affiche();
    */
    //tri
      char tempNom[30];

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (strcmp(nom[i], nom[j]) > 0) {
                // Échangez les noms
                strcpy(tempNom, nom[i]);
                strcpy(nom[i], nom[j]);
                strcpy(nom[j], tempNom);

                // Échangez les notes correspondantes
                float tempNote = note[i];
                note[i] = note[j];
                note[j] = tempNote;
            }
        }
    }
     affiche();
      char nomRecherche[30];
    printf("\nEntrez le nom pour affuiche la note : ");
    scanf("%s", nomRecherche);
    
    for (i = 0; i < n; i++) {
       if(strcmp(nom[i],nomRecherche)==0)
        printf(" note : %.2f\n", note[i]);
        break;
        
    }

     printf("Nombre total de notes saisies : %d\n", count);
     if (count > 0) {
        float moyenne = sommeDesNotes / count;
        printf("Moyenne des notes : %.2f\n", moyenne); // Affichez la moyenne des notes.
    } else {
        printf("Aucune note saisie, impossible de calculer la moyenne.\n");
        
    }
     printf("\nAprès modification, suppression et tri :\n");
    for (i = 0; i < n; i++) {
        printf("La personne %d :\n", i + 1);
        printf("Nom : %s\n", nom[i]);
        printf("Note : %.2f", note[i]);

        // Comparez chaque note à la moyenne et affichez le résultat.
        float moyenne = sommeDesNotes / count;
        if (note[i] == moyenne) {
            printf(" (égal à la moyenne)\n");
        } else if (note[i] < moyenne) {
            printf(" (inférieur à la moyenne)\n");
        } else {
            printf(" (supérieur à la moyenne)\n");
        }
    }
    return 0;
    
}
