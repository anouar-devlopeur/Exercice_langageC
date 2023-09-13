#include<stdio.h>
#include<stdlib.h>
int main(){
	int h=4;
	int T[5]={2,4,5,6,10};
	 int r;
	int i;
	for( i=0;i<5;i++){
    	r	=T[i]+T[h-i];
		printf("%d\n",r);
	}
	
	return 0;
}
