#include <stdio.h>
#include <stdlib.h>

int main() {
FILE* fichier=NULL;
/*r: read
 w:write
 a:append
 */
 
 char nom[30];
 printf("donner nom : ");
 scanf("%s",nom);
  printf(" nom : %s ",nom);
fichier =fopen("file.txt","a");
 if(fichier==NULL)printf("ce fichier n'existe pas");
 else {
 	fputs(nom,fichier);
 }
 printf("fin");
    return 0;
}

