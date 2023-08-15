#include<stdio.h>
#include<stdlib.h>
main () {
  float i,n,f;
   float a;
     printf("donner un nombre :\n");
     scanf("%f%f",&n,&f);
     for(i=0;i<=5;i++){
     a=n*(f+i)/2;
     printf("final:%1.2f*(%1.2f+%1.2f)/2=%1.2f  \n",n,f,i,a);
     
     
     }
     system("pause");
     }
