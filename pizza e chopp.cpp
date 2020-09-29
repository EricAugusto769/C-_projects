#include <stdio.h>
#include <stdlib.h>
main(){
	float chopps,corbeturas,valor_a_pagar;
printf("Quantidade de chopps requisitado: ");
scanf("%f",&chopps);
printf("Quantidade de corbeturas: ");
scanf("%f",&corbeturas);
valor_a_pagar=((chopps*10)+(corbeturas*1.50))+((chopps*10)+(corbeturas*1.50))*10/100;
printf("Valor a pagar: %.2f\n",valor_a_pagar);
system("pause");
}
