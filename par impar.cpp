#include <stdio.h>
#include <stdlib.h>
	main(){
		int n,r;
printf("Informe um n�mero: ");
scanf("%d",&n);
r= n%2;
	if ((r==0)&&(n>=1)){
		printf("Este n�mero � par e positivo\n");
	}
	else if ((r==0)&&(n<0)){
		printf("Este n�mero � par e negativo\n");
	}
	else if ((r==1)&&(n>=1)){
		printf("este n�mero � �mpar e positivo\n");
	}
	else if ((r==1)&&(n<0)){
		printf("Este b�mero � �mpar e negativo\n");
	}
system("pause");
	}
