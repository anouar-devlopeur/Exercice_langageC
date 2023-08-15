#include<stdio.h>
#include<stdlib.h>
main()
{
  int t [10][10]={{1,2,3,4,5,6},{7,8,9,10,11}};
  int i,j;
  for(i=0;i<10;i++)
  {
                  for(j=0;j<10;j++)
                  {
                                  
                                  printf("   2%d",t[i][j]);
                                  }
                                  printf(" \n");
                                  }
                                  system("pause");
                                  }
