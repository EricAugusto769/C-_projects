#include<stdio.h>
#include<stdlib.h>
	main(){
		char cliente[100];
		float total_compras,d;
printf("Nome do cliente: ");
scanf("%s",&cliente);
printf("Valor total das compras dele: ");
scanf("%f",&total_compras);
d=total_compras*(14/100);
printf("O cliente %s vai pagar no final com o desconto de 14 porcento %.2fR$\n",cliente,d);
system("pause");
	}
