#include<stdio.h>
#include<stdlib.h>
	main(){
		float vdc,a,vdcf;
printf("Valor das compras do cliente:");
scanf("%f",&vdc);
	if (vdc>500)
a=vdc*0.1;
vdcf=vdc+a;
printf("Voc� recebeu um acrescimo de %.2f no valor da compra %.2f sendo assim o valor final da compra � de: %.2f",a,vdc,vdcf);
system("pause");
	}
