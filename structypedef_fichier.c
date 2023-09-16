#include <stdio.h>
#include <stdlib.h>
#define MAX 100
//structure
typedef struct{
	int age ;
	char nom[30];
}personne;
//declaration fichier
/*r: read
 w:write
 a:append
 */
 
FILE* fichier=NULL;

int main() {
	int i,nben;
personne p[MAX];
fichier=fopen("struct.txt","w");
if(fichier==NULL)printf("ce fichier n'existe pas");
else{
	do{
		printf("donner nombre des presonnes :");
		scanf("%d",&nben);
	}while(nben<1 || nben>MAX);
	//rempllissage
	for(i=0;i<nben;i++){
			printf("donner info des presonnes num %d :",i+1);
			
					printf("nom : ");
				scanf("%s",p[i].nom);
					printf("age : ");
				scanf("%d",&p[i].age);
						printf("\n ");
	}
	//affichage 
		for(i=0;i<nben;i++){
			fprintf(fichier,"les information de personne num %d \n",i+1);
					fprintf(fichier,"nom : %s , age : %d \n",p[i].nom,p[i].age);	
						
	}
	fclose(fichier);
}
printf("fin\n ");

    return 0;
}

