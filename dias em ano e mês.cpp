#include<stdio.h>
#include<stdlib.h>
	main(){	
	float ano,mes;
	int dias;
printf("Quantidade de dias existindo: ");
scanf("%d",&dias);
ano=dias/360;
mes=dias/30;
printf("%d dias em anos corresponde a aproxiamadamente %.0f anos e em m�ses aproximadamente %.0f m�ses\n",dias,ano,mes);
system("pause");
}
