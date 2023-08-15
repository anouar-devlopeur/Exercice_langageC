#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
      int a,b,c;
      float x1,x2,delta;
      printf("entrer les nombres a et b et c : ",a,b,c);
      scanf("%d %d %d",&a,&b,&c);
      delta=(b*b)-4*a*c;
      printf("delta est egale :%f\n",delta);
      if(delta<0)printf("pas de solution dans R \n");
      else if(delta==0)
           printf("la solution est : %f\n",x1=x2=-b/2*a);
           else
               printf("x1=%f\n x2=%f\n",(-b+sqrt(delta))/2*a,(-b-sqrt(delta))/2*a);
               system("pause");
               
               }
      
      
