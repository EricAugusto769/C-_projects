#include<stdio.h>
#include<stdlib.h>
	main(){
		float vdc,a;
printf("Valor das compras do cliente:");
scanf("%f",&vdc);
	if (vdc>500){
		a=vdc*0.1;
		printf("O valor do bonus é de: %.2f",a);
	}	
	else{
		a=vdc*0.05;
		printf("O valor do bonus é de: %.2f",a);	
}	
system("pause");
	}
