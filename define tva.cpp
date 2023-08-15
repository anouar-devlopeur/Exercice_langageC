#include<stdio.h>
#include<stdlib.h>
#define TAUX_TVA 18.6
main()
{
double ht, ttc, net, tauxr, remise ;
printf("donner le prix hors taxes:");
scanf("%lf",&ht);
ttc = ht * ( 1 + TAUX_TVA/100);
if(ttc < 1000) tauxr = 0;
else if (ttc < 2000 ) tauxr = 1;
else if (ttc < 5000 ) tauxr = 3;
else tauxr = 5;
remise = ttc * tauxr / 100;
net= ttc - remise;
printf("prix ttc %10.2lf\n", ttc);
printf("remise %10.2lf\n", remise);
printf("net à payer %10.2lf :dh\n", net);
system("pause");
}
