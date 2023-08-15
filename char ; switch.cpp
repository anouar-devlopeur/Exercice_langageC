#include<stdio.h>
#include<stdlib.h>
int main()
{
char c;
printf("ecrire une caractere svp\n");
scanf("%c",&c);
switch(c)
{
          case 'a':printf("a charge\n"); break;
           case 'z':printf("z charge \n"); break;
default :printf("attention n'est pas de charge\n");
}
system("pause");
return (0);
}
