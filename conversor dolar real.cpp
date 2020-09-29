#include <stdio.h>
#include<stdlib.h>
main(){
	float d,c_d,v_em_r;
printf("Quantidade de doláres: ");
scanf("%f",&d);
printf("Cotação do dolar agora: ");
scanf("%f",&c_d);
v_em_r=c_d*d;
printf("%f dólares em real valem: %f\n",d,v_em_r);
system("pause");
}
