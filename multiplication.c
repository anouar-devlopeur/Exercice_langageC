#include<stdio.h>
#include<stdlib.h>
main()
{int a,nombre;
printf("vacteur le nombre:\0");
scanf("%d",&nombre);
for(a=0;a<=9;a++){printf("%d*%d= %d \n",nombre,a,nombre*a);
}
system("pause");}
