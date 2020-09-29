#include <stdio.h>
#include <stdlib.h>
main(){
	char *R,P[2];
	float valor_F,n_i;
printf("Bem vindo(a) a pizzaria, digite [P] para pizza pequena [M] para pizza média e [G] para pizza grande(Obs:Todas acompanham os ingredientes molho e queijo): ");
gets(R);
scanf("%f", &R);
	if (R=P);
{
printf("Quantos ingredientes extras seram adcionados(no caso de não ser necessario ingredientes extras digite [0]): ");
scanf("%f",&n_i);
n_i=n_i*0.0025;
}
		if (n_i>0)
	{
valor_F=0.75+(1.15*((3.14*10/4)*n_i)+((3.14*10/4)*0.01));
printf("O valor da sua pizza é: %.2f",valor_F);		
	}
		else
	{
valor_F=0.75+(1.15*((3.14*10/4)*0.01));
printf("O valor da sua pizza pequena é: %.2f",valor_F);
printf("%s",R);
	}
system("pause");
}
