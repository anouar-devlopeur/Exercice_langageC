#include<stdio.h>
#include<stdlib.h>

main(){
  int a,b,n,T[100]={1,2,3};
  int *p;
  p=T;
//  p=&T[0]; v2
  
    printf("donner un numobre : ");
	  scanf("%d",&n);
	  printf(" p= %d , T=%d\n ",*p,*T+n-1);
	  for(p=T;p<n+T;p++){
	  	 printf("[%d]: ",p-T);// p-T = 1-1 =====> n-1
	  	 //p=addrese T 
	  	   scanf("%d",p);
	  }
	  for(p=T;p<n+T;p++){
	  
	  	 //*p=contenu T 
	  	   printf("%d \n",*p);
	  }


}
