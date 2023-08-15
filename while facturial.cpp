#include<stdio.h>
#include<stdlib.h>
main()
{
      int s,i,n;
      printf("donnez un nbr:\n");
      scanf("%d",&n);
      s=1;
      i=1;
      while(i<=n){
                  s=s*i;
                  i++;
                  
                  }printf("la facturial:%d\n",s);
      system("pause");
      }
