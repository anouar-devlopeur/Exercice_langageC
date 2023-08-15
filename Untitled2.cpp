#include<stdio.h>
#include<stdlib.h>
int main()
{
int age;
 printf("donner l'age:"); 
scanf("%d",&age);
if (age==6||age==7){
          printf("poussin\n");  }
          else if (age==8||age==9){
          printf("pupille\n");  }
          else if (age==10||age==11){
          printf("minime\n");  }
         else if (age==12){
          printf("cadet\n");  }
          else {
          printf("aucun\n");  }
            system("pause");
              return (0);
          }
