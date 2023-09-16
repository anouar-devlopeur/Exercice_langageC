#include <stdio.h>
#include <stdlib.h>
#include <string.h>  // Add this for string functions

#define MAX 100

typedef struct {
    int jour;
    int mois;
    int annee;
} Date;

typedef struct {
    char Code[10];
    char Nom[10];
    int Quantite;
    float Prix;
    Date dt;
} Produit;

int newr;
static int i, index;

void AjouterSeulPro(Produit *p, int size);  // Corrected function declaration
void AjouterPlusieursPro(Produit *p, int size);  // Renamed the function

void AffichePro(Produit *p);  // Add parameter

int main() {
    i = 0;
    index = 0;
    i = index;
    int size = 1;

    // Initialize calloc heap to 0
    Produit *p = calloc(size, sizeof(Produit));

    AjouterSeulPro(p, size);  // Call the function

    AffichePro(p);  // Call the function to display data

    free(p);  // Free allocated memory

    return 0;
}

void AjouterSeulPro(Produit *p, int size) {
    printf("-----------------------------------------\n");
    printf("Ajouter un seul produit : \n");
    printf("donner codep :\t");
    scanf("%s", &p[index].Code);
    printf("donner Nomp :\t");
    scanf("%s", &p[index].Nom);
    printf("donner Quantite :\t");
    scanf("%d", &p[index].Quantite);
    printf("donner Prix :\t");
    scanf("%f", &p[index].Prix);
    p[index].Prix += (p[index].Prix * 0.15);
    index++;
    printf("-----------------------------------------\n");
}

void AffichePro(Produit *p) {
    printf("--------------Debut Affiche---------------------------\n");
    printf("Affiche les donnes des produits : \n");
    printf(" index     %d \n", index);
    for ( i = 0; i < index; i++) {
        printf(" codep : %s \n", p[i].Code);
        printf(" Nom : %s \n", p[i].Nom);
        printf(" Quantite : %d \n", p[i].Quantite);
        printf(" Prix : %.2f \n", p[i].Prix);
        printf("-------------FIN affiche ----------------------------\n");
    }
}

void AjouterPlusieursPro(Produit *p, int size) {
    printf("Ajouter plusieurs produits : \n");

    printf("donner nombre de produits :\t");
    scanf("%d", &newr);
    size = size + newr;
    newr += index;
    printf("---------------realloc-------------------\n");
    p = realloc(p, size * sizeof(Produit));
    newr += index;

    for (i = index; i< newr; i++) {
        printf("donner codep :\t");
        scanf("%s", &p[i].Code);
        printf("donner Nomp :\t");
        scanf("%s", &p[i].Nom);
        printf("donner Quantite :\t");
        scanf("%d", &p[i].Quantite);
        printf("donner Prix :\t");
        scanf("%f", &p[i].Prix);
        p[i].Prix += (p[i].Prix * 0.15);
        index++;
        printf("-----------------------------------------\n");
    }
}

