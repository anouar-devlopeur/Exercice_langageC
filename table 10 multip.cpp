#include<stdio.h>
#include<stdlib.h>
main()
{
      int t [10][10];
  int i,j;
  for(i=1;i<10;i++)
  {
            printf(" %d | ",i);
  
                  for(j=1;j<10;j++)
                  {
                                   int k=i*j;
                                   if(k<10)
                                   printf(" 0%d ",k); 
                                   else
                                   printf(" %d ",k);
                                   }
                                   printf("\n");
                                   }
                                   system("pause");
                                   return 0;
                                   }
