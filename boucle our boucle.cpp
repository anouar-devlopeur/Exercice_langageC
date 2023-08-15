#include<stdio.h>
#include<stdlib.h>
main ()
{ int i,n,f,j,k,m,l;
     f=1;
     printf("donner un nbr: \n");
     scanf("%d",&n);
     for(i=1;i<=10;i++){
     f=f+2;
     printf(" %d x %d + %d = %d \n",n,i,f,n*i+f );
         }
         printf("\n");
    for(j=0;j<=4;j++){
         f=11;             }
         m=n*j+f;
             printf(" %d x %d + %d = %d \n",n,j,f,n*j+f );
             printf("\n");
     for(k=0;k<=6;k++){
         f=15;             }
         l=n*k+f;
          printf(" %d x %d + %d = %d \n",n,k,f,n*k+f );
          printf("\n");
         printf ("la somme: %d+%d=%d\n",m,l,l+m);
     system("pause");
     }
