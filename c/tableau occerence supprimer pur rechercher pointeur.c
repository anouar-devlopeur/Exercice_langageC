#include<stdio.h>
#include<stdlib.h>

main(){
  int a,x,n,T[100]={};
  int *p,*pa;
  //point 1eme element sur tableau 
  p=T;
//  p=&T[0]; v2
  pa=&T[0];
  *pa=*p;
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
	  
	   printf("donner un numobre x eliminer : ");
	  scanf("%d",&x);
	  	  for(p=T;p<n+T;p++){
			
			*pa=*p;
				 
			if(*pa!=x) pa++;
			
			}
		// p=T       =>1
		n=pa-T;	
		  printf(" %d\n ",pa-T);
		  printf("Affiche\n");
	  for(p=T;p<n+T;p++){
	  
	  	 //*p=contenu T 
	  	   printf("%d \n",*p);
	  }


}

