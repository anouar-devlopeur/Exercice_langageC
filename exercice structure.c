#include <stdio.h>
#include <stdlib.h>
#define CMAX 10
 int choix ,i,c , x;

typedef struct SClient {
    int code_cli;
    char Name[30];
    char prenom[30];
} SClient;

int compare(const void* a, const void* b) {
    const SClient* c1 = a;
    const SClient* c2 = b;
    return strcmp(c1->Name, c2->Name);
}

typedef struct date {
    int day;
    int week;
    int year;
} date;

typedef struct SCompte {
    int code_cpt;
    int code_cli;
    struct date d_compte;
} SCompte;

SClient clients[20];
SCompte comptes[20];

void menu() {
    printf("1- Gestion des clients\n");
    printf("2- Gestion des comptes\n");
    printf("3- Gestion des opérations\n");
    printf("4- Quitter\n");

    printf("Choisir le menu : ");
    scanf("%d", &choix);
    sous_menu(choix);
}

int sous_menu(int a)
{
    if(a==1)
    {
        printf("1- Ajouter \n");
        printf("2- Modifier \n");
        printf("3- Suprimer \n ");
        printf("4- Afficher \n ");
         printf("5- retour \n ");
        printf("choisir un sous menu : ");
        scanf("%d",&x);
        gere_client(x);
    }

    else if (a==2)
    {
     printf("1- Ajouter \n");
     printf("2- Rechercher \n");
     printf("3- Afficher la liste \n ");
     printf("4- Suprimer \n ");
     printf("5-  retour \n ");
     printf("choisir un sous menu : ");
        scanf("%d",&x);
        gere_compte(x);
    }

      else if ( a ==  3) {
         printf("1- Aretre  \n");
        printf("2-   Afficher le compte apre operation \n");
         printf("5-  retour \n ");
        printf("choisir un sous menu : ");

        scanf("%d",&x);
       // gere_opperation(x);

}

    else if ( a == 4 )
           return 0;
        else
    {
           printf("mauvais choix");
           return 0;

    }
}

int gere_client(int a)

{
   if (a == 1)
    {
        struct SClient client  ;
        FILE *file ;

        printf ("Code Client : ");
        scanf("%d",&client.code_cli);
        printf("Nom : ");
        scanf("%s",&client.Name);
        printf("prenom : ");
        scanf("%s",&client.prenom);


        file = fopen("client.txt","a");
        fwrite (&client, sizeof(client), 1, file);
        if (fwrite != 0)
                  printf("client ajouter avec succes");
            else
            printf("errur");
         fclose(file);
    }
    else if ( a == 2){

         struct SClient client;
         struct SClient nvClient ;
         FILE *file;
         printf("code client a modifier : ");
         scanf("%d",&nvClient.code_cli);
         printf("nv name : ");
         scanf("%s",&nvClient.Name);
         printf(" nv prenom : ");
         scanf("%s",&nvClient.prenom);
         file = fopen("client.txt", "r");
         int nbClients = 0 ;
         while (fread(&client, sizeof(struct SClient ), 1, file)){
        clients[nbClients] = client;
        nbClients++ ;
    }
    fclose(file);
    remove("client.txt ");
    FILE *nf;
    nf = fopen("nv.txt","a");
    for (i=0 ; i<nbClients ; i++)
    {
        if(clients[i].code_cli == nvClient.code_cli)
        fwrite(&nvClient, sizeof(clients[i] ), 1, nf );
    else
  fwrite(&clients[i], sizeof(clients[i]), 1, nf);
    }
       fclose(nf);
       rename("nv.txt","client.txt");
    }

   else if (a == 3)
   {


       struct SClient client;
        int code ;

         FILE *file;

         printf("code client a sup: ");
         scanf("%s",&code);

         file = fopen("client.txt", "r");

         int nbClients = 0 ;

         while (fread(&client, sizeof(struct SClient ), 1, file))
            {
        clients[nbClients] = client;
        nbClients++ ;


    }
    fclose(file);
    remove("client.txt ");


    FILE *nf;
    nf = fopen("nv.txt","a");
    for (i=0 ; i<nbClients ; i++)
    {
        if(clients[i].code_cli != code)


                  fwrite(&clients[i], sizeof(clients[i]), 1, nf);
    }
       fclose(nf);
       rename("nv.txt","client.txt");


   }


else  if (a == 4 )
{
    FILE *file ;
    struct SClient client ;
    file = fopen("client.txt","r");
    int nbClients = 0 ;

    while (fread(&client, sizeof(struct SClient ), 1, file)){
        clients[nbClients] = client;
        nbClients++ ;
    }
    fclose(file);

    qsort(clients , nbClients , sizeof(struct SClient) , compare );






    for ( c = 0 ; c < nbClients ; c++ )
    {
        printf("\nCode client : %d",clients[c].code_cli);
        printf("\nNom et prenom  : %s | %s",clients[c].Name, clients[c].prenom);
        printf("\n");
    }
}
 else if (a==5)
    menu();

}
   int gere_compte(int a) {
    if (a == 1) {
        SCompte compte;
        FILE* file;

        printf("Code compte : ");
        scanf("%d", &compte.code_cpt);
        printf("Code Client : ");
        scanf("%d", &compte.code_cli);
        printf("Day : ");
        scanf("%d", &compte.d_compte.day);
        printf("Week : ");
        scanf("%d", &compte.d_compte.week);
        printf("Year : ");
        scanf("%d", &compte.d_compte.year);

        file = fopen("compte.txt", "a");
        if (fwrite(&compte, sizeof(compte), 1, file) == 1)
            printf("Compte ajouté avec succès\n");
        else  {
            printf("Erreur\n");
        fclose(file);}
    } else {
        printf("Erreur\n");
    }


}




int main() {

menu ();

     return 0;
}
