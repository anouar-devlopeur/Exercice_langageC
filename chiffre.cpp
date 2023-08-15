#include<stdio.h>
#include<stdlib.h>
main ()
{
   int n,a,b,c,d,e,f;
   printf("donner un nbr\n");
   scanf("%d",&n);
		 a=n%10;
		 n=n/10;
		 b=n%10;
		 n=n/10; 
      	c=n%10;
		 n=n/10;
	     e=n%10;
		 n/=10;
  
			printf("a= %d     ",a,n);
			printf("b= %d     ",b,n); 
			printf("c= %d      ",c,n);
			printf("e= %d     ",e,n);
			  
              system("pause");
               
     return 0;
     
     
      }
