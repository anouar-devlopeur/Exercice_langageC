#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
	float x1,x2,y1,y2,d;
	printf("ecrire les cordonees de X\n");
	scanf("%f %f",&x1,&y1);
	printf("ecrire les cordonnes de Y\n");
	scanf("%f %f",&x2,&y2);
	printf("X(%f,%f) et Y(%f,%f)",x1,y1,x2,y2);
	d=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
	printf("la distace entre X ET Y est :%f \n",d);
	system("pause");
	return 0;
}
