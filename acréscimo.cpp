#include <stdio.h>
#include <stdlib.h>
main(){
	float v,a,r;
printf("Valor do produto sem o acréscimo: ");
scanf("%f",&v);
printf("Acréscimo: ");
scanf("%f",&a);
r=v+(v*a/100);
printf("O valor do produto com o acéscimo é de: %f\n",r);
system("pause");
}
