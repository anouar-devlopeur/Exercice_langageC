#include<stdio.h>

int main()
{
   int  nombre= 0 ;
    printf("ecrice nombre svp:\n");
    scanf("%d",&nombre);
    switch(nombre)
    {
    case 1:printf("jnvier\n"); break;
    case 2:printf("fevrier\n"); break;  
    case 3:printf("mars\n"); break; 
    
    case 4:printf("avril\n"); break;
    case 5:printf("mai\n"); break;
    case 6:printf("juin\n"); break;
    case 7:printf("juillet\n"); break;
    case 8:printf("aout\n"); break;
    case 9:printf("septembre\n"); break;
    case 10:printf("october\n"); break;
    case 11:printf("stepembre\n"); break;
    case 12:printf("decembre\n"); break;
    default :printf("attention n'est pas un mois\n");
}

return (0);
}
    
