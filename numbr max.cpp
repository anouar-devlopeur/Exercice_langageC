#include<stdio.h>
#include<stdlib.h>
main(){
       int a,b,c;
       printf("donnez un 3 nbr : \n");
       scanf("%d %d %d",&a,&b,&c);
       if(a>b && a>c){
              printf("nbr A  Max\n");
              }
       else  if(b>a && b>c){
              printf("nbr B Max\n");
              }
      else  if(c>b && c>a){
              printf("nbr C Max \n");
              }    
                 system("pause"); 
       }
