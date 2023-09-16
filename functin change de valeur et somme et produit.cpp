#include<stdio.h>
#include<stdlib.h>
 void echange(int *a,int *b){
 	int c,d;
 	if(*a * *b>0){
 		c=*a;
 		*a=*b;
 		*b=c;
	 }
	 else {
	 	c=*a + *b;
	 	d=*a * *b;
	 	*a=c;
	 	*b=d;
	 }
     
 }
main(){
  int a,b;
  int *pa,*pb;
  pa=&a;
  pb=&b;
    printf("donner un numobre A: ");
	  scanf("%d",pa);
	     printf("donner un numobre B: ");
	  scanf("%d",pb);
	echange(pa,pb);
	
	printf("donner un numobre A: %d ",a);
	printf("donner un numobre B: %d ",b);


}
