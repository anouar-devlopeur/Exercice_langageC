#include<stdio.h>
#include<stdlib.h>


main(){
int n,b=0;
printf("donner un nombre\n"); 
scanf("%d",&n);

	b=(b*10)+(n%10);
n/=10;
	b=(b*10)+(n%10);
n/=10;	
    b=(b*10)+(n%10);
n/=10;

printf("------- %d\n",b);


}
