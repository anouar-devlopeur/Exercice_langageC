#include<stdio.h>
#include<stdlib.h>
main(){
	  int n,i;
	  int *p;
	  p=&n;
	
	  do{
	  	  printf("donner un numobre : ");
	  
	  scanf("%d",p);	  // scanf("%d",&n);
	  
	  }while(*p<=0);//while(n<=0);
	 printf("les diviseures de %d sont : \n ",*p);
	for(i=1;i<*p;i++){//	for(i=1;i<n;i++)
		if(*p%i==0) printf("%d \n " ,i );
	}
}
