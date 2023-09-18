#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <time.h>

int main(){

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
 static int i,j, index;
	i=0;
index=0;
i=index;
	int size=1;
/**** insialisation calloc heap  est 0*/
Produit *p=calloc(size,sizeof(Produit));
// AjouterSeulPro( p,size);
//system("cls");

    //Ajouter Seul Produit
void AjouterSeulPro() {
    printf("-----------------------------------------\n");
    printf("Ajouter un seul produit : \n");
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
// Affiche Produit
void AffichePro() {
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


// AjouterSeulPro();
// AffichePro();
////Ajoute rPlusieurs Pro
void AjouterPlusieursPro() {
    printf("Ajouter plusieurs produits : \n");

    printf("donner nombre de produits :\t");
    scanf("%d", &newr);
    size = size + newr;
  
    printf("---------------realloc-------------------\n");
    p = realloc(p, size * sizeof(Produit));

 for (i = index; i < index + newr; i++) {
        printf("donner codep :\t");
        scanf("%s", p[i].Code);
        printf("donner Nomp :\t");
        scanf("%s", p[i].Nom);
        printf("donner Quantite :\t");
        scanf("%d", &p[i].Quantite);
        printf("donner Prix :\t");
        scanf("%f", &p[i].Prix);
        p[i].Prix += (p[i].Prix * 0.15);
    }

    index = index+ newr;
}
////recherche par code
//

int recherchcode(){
	  char cd[10];
   

    printf("Enter the Product Code: ");
    scanf("%s", cd);

    for ( i = 0; i <index ; i++) {
        if (strcmp(cd, p[i].Code) == 0) {
        printf(" code : %s \n", p[i].Code);
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
void recherchQte(){
	  int qte;
    int res = 0;

    printf("Enter the Product Quantite: ");
    scanf("%d", &qte);

    for ( i = 0; i <index ; i++) {
        if (p[i].Quantite==qte) {
             printf(" codep : %s \n", p[i].Code);
            printf(" Nom : %s \n", p[i].Nom);
            printf(" Prix : %.2f \n", p[i].Prix);
            res = 1; 
        }
    }

    if (res == 0) {
        printf("No product found with the given Quantite.\n");
    }
	  
}

void modifier(){
	   int pos = recherchcode();
    printf("le position %d\n",pos);
      if(pos != -1){
     printf("donner Nomp :\t");
    scanf("%s", &p[pos].Nom);
    printf("donner Quantite :\t");
    scanf("%d", &p[pos].Quantite);
    printf("donner Prix :\t");
    scanf("%f", &p[pos].Prix);
    p[pos].Prix += (p[pos].Prix * 0.15);
      	
      	
      }
         
         else {
        printf("Non Modifier\n");
              } 
}
////suppersion le produit 
void suppressionPro() {
 char cd[10];
    printf("Enter the Product Code: ");
    scanf("%s", cd);    
	int found = 0;  

    for (i = 0; i < index; i++) {
        if (strcmp(cd, p[i].Code) == 0) {
            printf("\n\tSupprimer un produit position %d",i);
            for (j = i; j < index - 1; j++) {
                p[j] = p[j + 1];
            }
            index--;
            found = 1; 
            break; 
        }
    }

    if (!found) {
        printf("Non suppression\n");
    }
}
  

//// tri par code 
void tricode(){
	  Produit t;
	
	 for(i=0;i<index;i++){
     	for(j=i+1;j<index;j++){
     	  if (strcmp(p[i].Code, p[j].Code) > 0) {
     			t=p[i];
     			p[i]=p[j];
     			p[j]=t;
			 }
     		
		 }
	 }
}
//tri par prix
 void PrixTTC(){
        int j, min, posMin;
        Produit t;
        for(i=0; i<index; i++){
            for(j=i+1; j<index; j++){
                if(p[i].Prix < p[j].Prix){
                    t= p[i];
                    p[i] = p[j];
                    p[j] = t;
                }
            }
        }
    }


int choix;
do{
	printf("\n ------------------------------------------- Menu Principale ----------------------------------------");
            printf("\n Entre votre choix de list suivant : ");
            printf("\n 1 - Ajouter un produit .\n 2 - Ajouter Plussieur produit .\n 3 - Afficher .");
            printf("\n 4 - Rechercher par code .\n 5 - Rechercher par Quntite .\n 6 -  Supprimer les produit  \n 7 -  modifier les produit .");
//         printf("\n 7 - Alimenter le stock (modifier) .\n 8 - Supprimer les produit .\n 9 - Statistique de vente .");
           printf("\n 8 -  incremontation par code tri\n 9-  dincremontation par prix tri\n");
            printf("\n 0 - Quitter .\n");
            printf("\n ----------------------------------------------------------------------------------------------------");
            printf("\n ===>  Entre les choix :");
            scanf("%d",&choix);
            switch(choix){
            	case 1:system("cls");
				        AjouterSeulPro();
						break;
            	case 2: system("cls");
				        AjouterPlusieursPro();
						break;	
				case 3: system("cls");
				       AffichePro();
					    break;
				case 4:system("cls");
				        recherchcode();  
						break;  
				case 5: system("cls");
				        recherchQte(); 
						break;
				case 6: system("cls");
				        suppressionPro();
						break;
   			    case 7:system("cls");
				        modifier();
						break;
				case 8:system("cls");
				       tricode();
					   break;
				case 9:system("cls");
				       PrixTTC();
					   break;
				case 0:  printf(" - Quitter .\n");break;
				default : printf("donner un nombre entre son 1 et 9"); break;	
			}
}while(choix!=0);


free(p);



	return 0;
}
