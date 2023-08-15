#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main ()
{
    int note=0;
     float tot ;
    int compteur=0;
    printf(" bonjour \n");
while(note>=0)
{
     tot=tot+note;
    compteur=compteur+1;         
    printf("introduisez une note:\n");
    scanf("%f",&note);
     }
if(compteur!=0)
{
               tot==tot-note;
               tot=tot/(compteur-1);
               printf("note moyenne:%f\n",tot);
               }
else
{
printf("aucun note valide%f \n");
}
system("pause");
return (0);
}
