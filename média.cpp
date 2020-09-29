#include<stdio.h>
#include<stdlib.h>
	main(){
		float n1,n2,m;
printf("Primeira nota: ");
scanf("%f",&n1);
printf("Segunda nota: ");
scanf("%f",&n2);
m=(n1+n2)/2;
	if (m>=7)
printf("Parabéns você passou, sua média: %.2f\n",m);
	else{
printf("Mais sorte ano que vem, sua média: %.2f\n",m);
}
system("pause");
	}
