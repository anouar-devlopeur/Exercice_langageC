#include<stdio.h>
int main() {
int n,r=0;   
printf("donner  un entier : ");
scanf("%d",&n);

while(n>0){
  r = r * 10 ;  
//     printf("%d \n",r); 
  r = r + n%10 ;
//  	 printf("%d  \n",r);  
  n= n/10;
//     printf("%d  \n",n);
  }
	 printf("%d  \n",r);      
return 0;    
}
/*
123
0*10=0
0+123%10=3
12,3
30
30+12,3%10=32
12,3/10=1,23
320
320+1,23%10=321
1,23/10=0*/

