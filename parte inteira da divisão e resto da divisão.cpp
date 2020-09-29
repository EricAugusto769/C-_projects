#include <stdio.h>
#include <stdlib.h>
#include <cmath>
	main(){
		int n1,n2,r_inteiro,r_modulo;
printf("Escreva um número: ");
scanf("%d",&n1);
printf("Escreva outro número: ");
scanf("%d",&n2);
r_inteiro=floor(n1/n2);
r_modulo=n1%n2;
printf("Parte inteira da divisão desses número: %d resto da divisão desses números: %d\n",r_inteiro,r_modulo);	
system("pause");
	}
