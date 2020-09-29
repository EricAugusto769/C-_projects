#include <stdio.h>
#include <stdlib.h>
main(){
	float v_da_c,dias,m,j,p;
printf("Qual o valor original da conta: ");
scanf("%f",&v_da_c);
printf("Parcela combinada com o devedor: ");
scanf("%f",&p);
printf("Quanto tempo após os 30 dias de atraso(se ainda não ultrapassou os 30 dias digite [0]): ");
scanf("%f",&dias);
m=v_da_c+(v_da_c*10/100);	
	if(dias>0)
{	
		j=(m*(0.33/100)*dias)/p;
		printf("O valor a pagar com os juros a multa é de: %.2f durante %.0f meses\n",j,p);
}
	else
{
		m=v_da_c+(v_da_c*10/100)/p;
		printf("O valor a pagar com a multa é de: %.2f durante %.0f meses\n",m,p);
}
system("pause");
}
