#include<stdio.h>
#include<stdlib.h>
int main()
{
    char c ;
    printf("ecrice caractére svp:\n");
    scanf("%c",&c);
    switch(c)
    {
    case 'a':printf("a est une voyelle\n"); break;
    case 'e':printf("e est une voyelle\n"); break;  
    case 'i':printf("i est une voyelle\n"); break; 
    
    case 'o':printf("o est une voyelle\n"); break;
    case 'u':printf("u est une voyelle\n"); break;
    case 'y':printf("y est une voyelle\n"); break;
    default :printf("attention n'est pas une voyelle\n");
}
system("pause");
}
    
