#include <stdio.h>
#include <stdlib.h>
main()
{
	float V_P,P,T;
printf("Informe o valor pago: ");
scanf("%f",&P);
printf("Valor do produto: ");
scanf("%f",&V_P);
if (P>V_P)
{
	T= P-V_P;
printf("O troco a ser dado é: %f",T );
}
else
{
T= V_P-P;
printf("Ainda faltam: %f\n",T);
}
system("pause");
}
