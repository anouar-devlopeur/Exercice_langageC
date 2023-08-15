#include<stdio.h>
#include<stdlib.h>
main()
{ 
      int tab [4],i,n,max,position,min ;
   
//      printf("entre le nmb de repetition : \n");
//                      scanf("%d",&n);
      
           for(i=0;i<4;i++)
           {
                      printf("entre le val  tab : \n",i);
                      scanf("%d",&tab[i]);
                      printf("tab=%d\n",i,tab[i]);
                      }
                      max=tab[0];
                                       for(i=0;i<4;i++)
                                       if (tab[i]>max) 
                                       {
                                       max=tab[i];
                                       position=i;
                                       }
                                    {
                                                        printf("le max %d et la position %d \n",max,position);
                                                        }  
                                                        
                      min=tab[0];
                                       for(i=0;i<4;i++)
                                       if (tab[i]<min) 
                                       {
                                       min=tab[i];
                                       position=i;
                                       }            
                                       {
                                                    
                                                        printf("le min %d et la position %d \n",min,position);
                                                        } 
                                                        printf("\n    ___en fin__     \n");  
                  system("pause");
                      return 0;
                      }
                      
