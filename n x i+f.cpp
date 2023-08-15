#include<stdio.h>
#include<stdlib.h>
 int main () {
     int i,n,f;
     f=1;
     printf("donner un nombre depart:\n");
     scanf("%d",&n);
     for(i=2;i<=6;i++){
  
     printf("final: (%d *%d) +%d =%d \n",n,i,f,(n*i)+f);
    f=f+1;
     }
     
system("pause");
     }
