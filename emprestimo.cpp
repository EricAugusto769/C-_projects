#include <stdio.h>
#include <stdlib.h>
main(){
	float s,p;
printf("Informe o valor do seu salario: ");
scanf("%f",&s);
printf("Informe o valor da prestação: ");
scanf("%f",&p);
s=s*0.25;
	if (p<s)
printf("Seu emprestimio foi aprovado\n");
	else 
printf("Você não pode pedir um emprestimo\n");
system("pause");
}
