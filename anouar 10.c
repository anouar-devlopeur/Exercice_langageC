#include<stdio.h>
#include<stdlib.h>
main()
{
printf("bonjour tout le monde \1  \2 \3  \n\n");
int i,j,n;
printf("taper un nomb : ");
scanf("%d",&n);
printf("   |");
for(i=1;i<=n;i++)
{
       printf("%3d   ",i);
        }
       printf("\n");
       for(i=1;i<=n*7;i++)
       {
                   printf("-");     
                        }
              printf("\n");   
                 for(i=1;i<=n;i++)
                 {
                             printf("\n%2d |",i);     
                               for(j=1;j<=n;j++) 
                                {
                               printf("%3d   ",i*j); 
                                }
                                printf("\n");
                                }
                                system("pause>null");
}
