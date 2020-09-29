#include <stdio.h>
#include <stdlib.h>
main(){
	float KG,P_KG,P_F;
printf("Valor do produto por KG: ");
scanf("%f",&P_KG);
printf("Valor de KG consumidos: ");
scanf("%f",&KG);
P_F=KG*P_KG;
printf("Você terá que pagar R$%f\n",P_F);
system("pause");
}

