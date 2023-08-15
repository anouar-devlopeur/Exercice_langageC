#include<stdio.h>
#include<stdlib.h>
main()
{   int s,i,n;
printf("donnez un nbr:\n");
scanf("%d",&n);
      s=0;
      i=0;
      while(i<=n){
                  s=s+i;
                  i++;
                  }
                  printf("la somme:%d\n",s);
                  system("pause");
                  }
