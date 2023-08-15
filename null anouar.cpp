#include<stdio.h>
#include<stdlib.h>
main()
{
   int n ;
   printf("donnez un nbr : \n");
   scanf("%d",&n);
   if(n<0){
           printf("negatif\n");
           }
          else if(n>0){
           printf("positif\n");
           }
          else{
           printf("null\n");
           }
           
           system("pause");
      }
