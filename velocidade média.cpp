#include <stdio.h>
#include <stdlib.h>
main(){
	float S,So,V,T;
printf("Dist�ncia inicial:");
scanf("%f",&So);
printf("DIst�ncia final: ");
scanf("%f",&S);
printf("Tempo de viagem: ");
scanf("%f",&T);
V=S-So/T;
printf("A velocina m�dia para essa viagem � %.2f\n",V);
system("pause");
}
