#include<stdio.h>
#include<stdlib.h>
main()
{
      int i,j,tabl[20][10];
      for(i=1;i<20;i++){
                 if(i<10)
                 printf("\n0%d",i);
                 else 
                 printf("\n%d",i);
                 for(j=1;j<10;j++)
                 {
                                  int k = i*j;
                                  if(k<10)
      {
                                  printf(" 00%d ",k);
                                  }
                                  else if(k<100)
                                  {
                                       printf(" 0%d ",k);
                                       }
                                       else {
                                            printf(" %d ",k);
                                            }
                                            }
                                            printf("\n");
                                            }
                                            	system("pause>null");
}
                                          
                                                 
