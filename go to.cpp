#include<stdio.h>
#include<stdlib.h>
main()
{
   int i;
   for(i=0;i<8;i++)
   {
            printf("tsfe %d \n ",i);
            if(i==4) goto sortie;
            }
            sortie:printf("fin de programme\n");
            system ("pause");
            }
