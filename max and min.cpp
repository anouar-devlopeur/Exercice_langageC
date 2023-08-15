#include<stdio.h>
#include<stdlib.h>
main()
{
      int a,i,max,min;
      
      for(i=1;i<=6;i++)
      {
                       printf("entrer les nombre N %d:",i);
                       scanf("%d",&a);
                       if(a>max)  max=a;
                       if(a<min) min=a;
                    }
                       printf("le max est =%d\n",max);
                       printf("le min est =%d\n",min);
                    system("pause");
                    return(0);
                       }
