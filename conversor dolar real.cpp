#include <stdio.h>
#include<stdlib.h>
main(){
	float d,c_d,v_em_r;
printf("Quantidade de dol�res: ");
scanf("%f",&d);
printf("Cota��o do dolar agora: ");
scanf("%f",&c_d);
v_em_r=c_d*d;
printf("%f d�lares em real valem: %f\n",d,v_em_r);
system("pause");
}
