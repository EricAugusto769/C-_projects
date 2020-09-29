#include <stdio.h>
#include <stdlib.h>
	main(){
		float km,gas;
		int tipo;
printf("Quantos km foram percorridos?:");
scanf("%f",&km);
printf("Qual tipo de carro  foi utilizado? Digite 1 para carro A 2 para o B e 3 para o C: ");
scanf("%d",&tipo);
	if (tipo==1){	
gas=0.0833333333333333*km;
printf("Vpcê irá gastar aproximadamente nessa viagem %.2f litros\n",gas);
}
	else if (tipo==2){
gas=0.1111111111111111*km;
printf("Você irá gastar aproximadamente nessa viagem %.2f litros\n",gas);
	}
	else if (tipo==3){
gas=0.125*km;
printf("Você irá gastar aproximadamente nessa viagem %.2f litros\n",gas);
}
system("pause");
	}
