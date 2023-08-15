#include<stdio.h>
#include<stdlib.h>
int main()
{
   int  a,b,op;
   
    printf("ecrice nombre svp:\n");
    scanf("%d %d",&a,&b);
    printf("choissi operation:\n");
    scanf("%d",&op);
    switch(op)
    {
    case 1:printf("addition:%d\n",a+b); break;
    case 2:printf("multiplication:%d\n",a*b); break;  
    case 3:printf("sustraction:%d\n",a-b); break; 
    
    case 4:printf("division:%d\n",a/b); break;
    
    case 5:printf("modulo:%d\n",a%b); break;

    default :printf("attention n'est pas si operation\n");
}
system("pause");
return (0);
}
