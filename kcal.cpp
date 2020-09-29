#include <stdio.h>
#include <stdlib.h>
	main(){
	int tempo_c,tempo_p,tempo_n;
	float peso,kcal;
printf("Seu peso em Kg: ");
scanf("%f",&peso);
printf("Quanto tempo você corre por semana em minutos: ");
scanf("%d",&tempo_c);
printf("Quanto tempo você pedala por semana em minutos: ");
scanf("%d",&tempo_p);
printf("Quanto tempo você nada por semana em minutos: ");
scanf("%d",&tempo_n);
	if (tempo_c != 0 && tempo_p !=0 && tempo_n != 0)
{
kcal=(7+7+8)*peso*(tempo_c+tempo_p+tempo_n)/60;
printf("Kcal gastas por semana: %.2f\n",kcal);
}
	else if (tempo_c != 0 && tempo_p !=0 && tempo_n==0)
{
kcal=(7+7)*peso*(tempo_c+tempo_p+tempo_n)/60;
printf("Kcal gastas por semana: %.2f\n",kcal);
}
	else if (tempo_c==0 && tempo_p !=0 && tempo_n !=0)
{
kcal=(7+8)*peso*(tempo_c+tempo_p+tempo_n)/60;
printf("Kcal gastas por semana: %.2f\n",kcal);
}
	else if (tempo_c !=0 && tempo_p ==0 && tempo_n !=0)
{
kcal=(7+8)*peso*(tempo_c+tempo_p+tempo_n)/60;
printf("Kcal gastas por semana: %.2f\n",kcal);
}
	else if (tempo_c !=0 && tempo_p ==0 && tempo_n ==0)
{
kcal=(7)*peso*(tempo_c+tempo_p+tempo_n)/60;
printf("Kcal gastas por semana: %.2f\n",kcal);
}
	else if (tempo_c ==0 && tempo_p !=0 && tempo_n ==0)
{
kcal=(7)*peso*(tempo_c+tempo_p+tempo_n)/60;
printf("Kcal gastas por semana: %.2f\n",kcal);
}
	else if (tempo_c ==0 && tempo_p ==0 && tempo_n !=0)
{
kcal=(8)*peso*(tempo_c+tempo_p+tempo_n)/60;
printf("Kcal gastas por semana: %.2f\n",kcal);
}
	else 
printf("Error\n");
system("pause");
	}
