#include <stdio.h>
#include <stdlib.h>
#include <cmath>
	main(){
		int n1,n2,r_inteiro,r_modulo;
printf("Escreva um n�mero: ");
scanf("%d",&n1);
printf("Escreva outro n�mero: ");
scanf("%d",&n2);
r_inteiro=floor(n1/n2);
r_modulo=n1%n2;
printf("Parte inteira da divis�o desses n�mero: %d resto da divis�o desses n�meros: %d\n",r_inteiro,r_modulo);	
system("pause");
	}
