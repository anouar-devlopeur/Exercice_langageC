#include<stdio.h>
#include<stdlib.h>
int main(){
	int T[100],i,n,j,tri;
	printf("donne n: \t");
	scanf("%d",&n);
	for(i=0;i<n;i++){
			printf("donne T[%d]: \t",i+1);
	scanf("%d",&T[i]);
	}
		for(i=0;i<n;i++){
			printf(" %d \n",T[i]);

			}
			printf("-----------------desc---------------\n");
//	tri tableau

	   //varibale tri
	   	   
//	   Affiche tri desc
     for(i=0;i<n;i++){
     	for(j=i;j<n;j++){
     		if(T[i]<T[j]){
     			tri=T[i];
     			T[i]=T[j];
     			T[j]=tri;
			 }
     		
		 }
	 }
	   
	   for(i=0;i<n;i++){
			printf(" %d \n",T[i]);

		}
	   

		
	//	   Affiche tri asc

	     for(i=0;i<n;i++){
  	for(j=i;j<n;j++){
	 
  	if(T[i]>T[j]){
  		tri=T[i];
  		T[i]=T[j];
  		T[j]=tri;
	  }
	   }
  }
		 	printf("----------------Asc--------------\n");
		 	for(i=0;i<n;i++){
			printf(" %d \n",T[i]);

			}
	 
	return 0;
}
