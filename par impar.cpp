#include <stdio.h>
#include <stdlib.h>
	main(){
		int n,r;
printf("Informe um número: ");
scanf("%d",&n);
r= n%2;
	if ((r==0)&&(n>=1)){
		printf("Este número é par e positivo\n");
	}
	else if ((r==0)&&(n<0)){
		printf("Este número é par e negativo\n");
	}
	else if ((r==1)&&(n>=1)){
		printf("este número é ímpar e positivo\n");
	}
	else if ((r==1)&&(n<0)){
		printf("Este búmero é ímpar e negativo\n");
	}
system("pause");
	}
