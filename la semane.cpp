#include<stdio.h>
#include<stdlib.h>
main()
{
    char  *t[7]={"lundi","mardi","mercredi","juedi","vendredi","samedi","dimanche"};
    int i;
    printf("entre un nombre entre 1 et 7\n");   
    scanf("%d",&i); 
    
    printf("le jour est %s \n",t[i-1]);
    system("pause");
    return 0;
}
                  
