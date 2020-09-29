#include<stdio.h>
#include<stdlib.h>
	main(){
		int f;
		float n1,n2,m;
printf("Primeira nota: ");
scanf("%f",&n1);
printf("Segunda nota: ");
scanf("%f",&n2);
printf("Quantidade de faltas:");
scanf("%d",&f);
m=(n1+n2)/2;
	if ((m>=7)&&(f<15))
printf("Parabéns você passou, sua média: %.2f\n",m);
	else{
printf("Mais sorte ano que vem, REPROVADO\n",m);
}
system("pause");
	}
