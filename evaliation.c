#include<stdio.h>
#include<math.H>
int main(){
	int n,b=0,s=0,j;
	
	do{
		printf("donner un nombre :");
	scanf("%d",&n);
	}while(n<10 || n>1000);
 while(n>0){
  
  	 b=b*10+(n%10);
  	 n/=10;
  	 s=s+(pow(b%10,3));
//  	 b=0;
 printf("-----------------------------------");
  	  printf("%d\n",s);
  	  
  }
  
 
 printf("%d",s);
    

	return 0;
}

