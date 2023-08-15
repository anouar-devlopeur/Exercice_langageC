#include<stdio.h>
#include<stdlib.h>
main()
{

int nbr;
printf("entrez les nomres:\n");
scanf("%d",&nbr);
switch(nbr)
{
	case 0:printf("null\n");break;
	case 1:printf("premier\n");break;
	case 2:printf("dexieme\n");break;
	case 3:printf("troizieme\n");break;
	default:printf("au revoir\n");break; 
}
system("pause");
return 0;
}
