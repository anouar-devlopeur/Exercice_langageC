#include<stdio.h>
#include<stdlib.h>
main()
{
      int t [9];
      
      int i,j,nbr_eleves,som ; 
      float moy;
           for(i=1;i<9 ;i++){
      printf("donner nmbr:\n",i);
      scanf("%d",&t[i]);
      }
      for(i=1,som=0;i<4;i++)
                       som =som+t[i];
                        moy=som/4 ;
                         printf("la moyenne est:%f \n",moy);
                         for(i=1,nbr_eleves=0;i<4;i++)
                         if(t[i]>=moy)
                         nbr_eleves++;
                         printf("eleve valider:%d\n",nbr_eleves);
                                            system("pause");
                                            return 0;
                                            }
