#include <stdio.h>
#include <stdlib.h>
main(){
	float v,a,r;
printf("Valor do produto sem o acr�scimo: ");
scanf("%f",&v);
printf("Acr�scimo: ");
scanf("%f",&a);
r=v+(v*a/100);
printf("O valor do produto com o ac�scimo � de: %f\n",r);
system("pause");
}
