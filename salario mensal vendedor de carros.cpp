#include <stdio.h>
#include <stdlib.h>
	main(){
		int num_do_vendedor,num_de_carros;
		float valor_T_vendas,salario_Fx,valor_por_carro,salario_F;
printf("Informe o número do funcionario: ");
scanf("%d",&num_do_vendedor);
printf("Número de carros vendidos por ele: ");
scanf("%d",&num_de_carros);
printf("Valor total de suas vendas: ");
scanf("%f",&valor_T_vendas);
printf("Salário fixo: ");
scanf("%f",&salario_Fx);
printf("Valor que receberá por carro vendido: ");
scanf("%f",&valor_por_carro);
salario_F=salario_Fx+(valor_por_carro*num_de_carros)+(valor_T_vendas+(valor_T_vendas*(5/100)));
printf("Considerando as informações dadas o funcionario %d receberá neste mês R$%.2f de salário\n",num_do_vendedor,salario_F);
system("pause");
	}
