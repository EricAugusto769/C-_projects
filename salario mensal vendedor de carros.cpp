#include <stdio.h>
#include <stdlib.h>
	main(){
		int num_do_vendedor,num_de_carros;
		float valor_T_vendas,salario_Fx,valor_por_carro,salario_F;
printf("Informe o n�mero do funcionario: ");
scanf("%d",&num_do_vendedor);
printf("N�mero de carros vendidos por ele: ");
scanf("%d",&num_de_carros);
printf("Valor total de suas vendas: ");
scanf("%f",&valor_T_vendas);
printf("Sal�rio fixo: ");
scanf("%f",&salario_Fx);
printf("Valor que receber� por carro vendido: ");
scanf("%f",&valor_por_carro);
salario_F=salario_Fx+(valor_por_carro*num_de_carros)+(valor_T_vendas+(valor_T_vendas*(5/100)));
printf("Considerando as informa��es dadas o funcionario %d receber� neste m�s R$%.2f de sal�rio\n",num_do_vendedor,salario_F);
system("pause");
	}
