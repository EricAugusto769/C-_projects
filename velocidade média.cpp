#include <stdio.h>
#include <stdlib.h>
main(){
	float S,So,V,T;
printf("Distância inicial:");
scanf("%f",&So);
printf("DIstância final: ");
scanf("%f",&S);
printf("Tempo de viagem: ");
scanf("%f",&T);
V=S-So/T;
printf("A velocina média para essa viagem é %.2f\n",V);
system("pause");
}
