#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
	double a,b,c,delta,x2,x1;
	printf("donne la solution de cette equation:\n ax^2+bx+c=0\n");
	printf("on calcule delta:\n");
	printf("entrer la valeur de a:\n");
	scanf("%d",&a);
	printf("entrer la valeur de b:\n");
	scanf("%d",&b);
	printf("entrer la valeur de c:\n");
	scanf("%d",&c);
	delta=pow(b,2)-4*a*c;
	printf("donc delta=%d\n",delta);
	if(delta>0){
		printf("on a deux solution:\n");
	    x1=(-b+sqrt(delta))/2*a;
		printf("x1=(-b+sqrt(delta))/2*a=%d\n",x1);
		x2=(-b-sqrt(delta))/2*a;
		printf("x2=(-b-sqrt(delta))/2*a=%d\n",x2);
			}
	 else if(delta==0)
	{
	printf("on a une seule solution:\n");
	x1=x2=(-b)/2*a;
	printf("x1=x2=(-b)/2*a=%d\n",x1,x2);
	}
	else if(delta<0)
	{
		printf("pas de solution dans R:\n");
	}
	system("pause");
	return 0;
}
