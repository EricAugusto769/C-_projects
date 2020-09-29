#include <stdio.h>
#include <stdlib.h>
main(){
	float q_de_f,v,f_a,v_com_m,q_de_f_a;
printf("Quantidade de fitas da locadora: ");
scanf("%f",&q_de_f);
printf("Valor por cada uma delas: ");
scanf("%f",&v);
f_a=((q_de_f*1/3)*v)*12;
printf("Faturamento anual da locadora: %.2f\n",f_a);
v_com_m=((q_de_f*1/10)*v)+((q_de_f*1/10)*v)*10/100;
printf("Valor ganho com multas por mês: %.2f \n",v_com_m);
q_de_f_a=(q_de_f*1/10)*2/100;
printf("No final do ano haveram apenas: %.2f\n",q_de_f_a);
system("pause");
}
