#include<stdio.h>
#include<stdlib.h>
 main()
{
int a;
do{
	printf("entrer le nombre svp:\n");
	scanf("%d",&a);
	}
	while(a>=0 && a<=10);
	printf("le nombre est faux");
	system("pause");
	return 0;
	}

