#include<stdio.h>
#include<stdlib.h>

struct persone{
	char nom[20],prenom[20];
	int age ;
	 char sexe[12];
};
static int i;
int main()
{
	int choix;
struct persone T[100];
	int nbn;
	do{
		printf("donner nombre de eng:");
		scanf("%d",&nbn);
		if(nbn<0 ||nbn>100){
			puts("nombre de eng doit etre compris 0 et 100");
		}
	}while(nbn<0 ||nbn>100	);
	
             system("cls") ; 
     do{
	     
	printf("\n***************Menu*****************\n");
	printf("\n 1-Ajouter personne\n");
	printf("\n 2-Supprimer personne\n");
	printf("\n 3-Modifer personne\n");
	printf("\n 4-Afficher\n");	

	printf("entre les nombre de  choix:    ");

	scanf("%d",&choix);
  	
	switch (choix){
      case 1: 
	            for(i=0;i<nbn;i++){
				
	                printf("\n nom  :");
                    scanf("%s",T[i].nom);
                     printf("\n prenom :  ");
                    scanf("%s",T[i].prenom);
                     printf("\n Age :   ");
                    scanf("%d",&T[i].age);
                     printf("\n sexxe : ");
                    scanf("%s",T[i].sexe);
                   }
	                 break;
	                 

      case 2 :      for(i=0;i<nbn;i++){
				
	                printf("\n nom %s :",T[i].nom);
                   
                     printf("\n prenom : %s  ",T[i].prenom);
                 
                     printf("\n Age : %d  ",T[i].age);
                   
                     printf("\n sexxe :%s ",T[i].sexe);
                   
                   }
					 break;

      case 3 : printf("\n Supprimer");break;
      
       case 4 : printf("\n Modifier");break;

      default : printf("\n Quitter");break;

   }
    }  while(nbn!=4);   

printf("\n");


	
	
	
	
	return 0;
}
