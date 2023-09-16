#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

//structure
 typedef struct{
        int jour;
        int mois;
        int annee;
    }Date;

    typedef struct{
        char Code[10];
        char Nom[10];
        int Quantite;
        float Prix;
        Date dt;
    }Produit;
 
 int newr;
static int i,index,j;	

	//proc et function
  void AjouterSeulPro(Produit *p, int size);  // Corrected function declaration
void AjouterPlusieursPro(Produit *p, int size);  // Renamed the function
void AffichePro(Produit *p);  // Add parameter
int recherchcode(Produit *p);//rchcode
void recherchQte(Produit *p);//recheQte
void suppressionPro(Produit *p);//Suppersion 
void tricode(Produit *p);//tri par code
void triprixdesc(Produit *p);//tri par prox
/*-----------------------------main------------------------------------*/
int main(){
	i=0;
index=0;
i=index;
	int size=1;
/**** insialisation calloc heap  est 0*/
Produit *p=calloc(size,sizeof(Produit));
 AjouterSeulPro( p,size);
system("cls");
printf("-------------Seul ----------------------------\n");

	 AffichePro(p); 
printf("-----------------------------------------\n");

 AjouterPlusieursPro( p,  size);

	printf("-------------plesierus ----------------------------\n");
//	
	 AffichePro(p); 
	 	printf("-------------tri prix ----------------------------\n");
       triprixdesc(p);
       printf("------------------------- aff desc prix----------");
        AffichePro(p);
            printf("-----------------------------------------\n");
       	printf("-------------recherche code  ----------------------------\n");
recherchcode(p);
	 	printf("-------------recherche Quntite  ----------------------------\n");
 recherchQte(p);
  printf("-------------tri par code  ----------------------------\n");
  tricode(p);
    printf("-----------------------------------------\n");
  	 AffichePro(p); 
/printf("-------------suppersion  ----------------------------\n");
  suppressionPro(p);
  printf("-----------------------------------------\n");
  	 AffichePro(p); 
	return 0;
	
	
}

/***********************proc et function *************************/
//Ajouter Seul Produit
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
  
}
// Affiche Produit
void AffichePro(Produit *p) {
    printf("--------------Debut Affiche---------------------------\n");
    printf("Affiche les donnes des produits : \n");
    printf(" index  row est :     %d \n", index);
    for ( i = 0; i < index; i++) {
        printf(" codep : %s \n", p[i].Code);
        printf(" Nom : %s \n", p[i].Nom);
        printf(" Quantite : %d \n", p[i].Quantite);
        printf(" Prix : %.2f \n", p[i].Prix);
        printf("-------------FIN affiche ----------------------------\n");
    }
}
//Ajoute rPlusieurs Pro
void AjouterPlusieursPro(Produit *p, int size) {
    printf("Ajouter plusieurs produits : \n");

    printf("donner nombre de produits :\t");
    scanf("%d", &newr);
    size = size + newr;
  
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
       
    }
}
//recherche par code

int recherchcode(Produit *p){
	  char cd[10];
   

    printf("Enter the Product Code: ");
    scanf("%s", cd);

    for ( i = 0; i <index ; i++) {
        if (strcmp(cd, p[i].Code) == 0) {
        printf(" Nom : %s \n", p[i].Nom);
        printf(" Quantite : %d \n", p[i].Quantite);
        printf(" Prix : %.2f \n", p[i].Prix);
         // Set the flag to indicate a match was found
             return i;
          
                 
		}
    }
 printf("Product with the given code not found.\n");
    return -1;
}
// recherche par Qte
void recherchQte(Produit *p){
	  int qte;
    int res = 0;

    printf("Enter the Product Quantite: ");
    scanf("%d", &qte);

    for ( i = 0; i <index ; i++) {
        if (p[i].Quantite==qte) {
             printf(" codep : %s \n", p[i].Code);
            printf(" Nom : %s \n", p[i].Nom);
            printf(" Prix : %.2f \n", p[i].Prix);
            res = 1;  // Set the flag to indicate a match was found
        }
    }

    if (res == 0) {
        printf("No product found with the given Quantite.\n");
    }
	  
}
// tri par nom 
void tricode(Produit *p){
	  Produit t;
	
	 for(i=0;i<index;i++){
     	for(j=i+1;j<index;j++){
     	  if (strcmp(p[i].Nom, p[j].Nom) > 0) {
     			t=p[i];
     			p[i]=p[j];
     			p[j]=t;
			 }
     		
		 }
	 }
}
// tri par prix dsc
void triprixdesc(Produit *p){
	  Produit t;
	
	 for(i=0;i<index;i++){
     	for(j=i+1;j<index;j++){
     	  if (p[i].Prix< p[j].Prix) {
     			t=p[i];
     			p[i]=p[j];
     			p[j]=t;
			 }
     		
		 }
	 }
}
//suppersion le produit 
void suppressionPro(Produit *p) {
    int pos = recherchcode(p);
      if(pos != -1){
            printf("\n\tSupprimer un produit");
            p[pos] = p[pos+1];
            index--;
        }
         else {
        printf("Non suppression\n");
    }
}


