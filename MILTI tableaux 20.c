#include<stdio.h>
#include<stdlib.h>
main()
{
	int t[20][10];
	int i,j,k;
	for(i=0;i<=20;i++)
	{
		if(i<10){
		printf("\n  %d |",i);}

  		else{
		printf("\n %d |",i);}

        
		for(j=0;j<=10;j++)
		{ 
			k=j+i;
			
			if(k<10){
			printf("  00%d",k);}
			else if (k<100){
			printf("  0%d",k);}
			else {
			printf("  %d",k);}
			
		}
		printf(" | \n");
	}
	system("pause");
}

