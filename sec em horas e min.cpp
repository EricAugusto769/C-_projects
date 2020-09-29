#include<stdio.h>
#include<stdlib.h>
	main(){
		int sec;
		float hora,min;
printf("Informe o valor das horas em segundos: ");
scanf("%d",&sec);
hora=sec/3600;
min=sec/60;
printf("%d segundos corresponde a aproximadamente %.2f hora(s) e a aproximadamente %.2f minutos\n",sec,hora,min);
system("pause");
	}
