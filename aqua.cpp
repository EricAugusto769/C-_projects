#include <stdio.h>
#include <stdlib.h>
main(){
	float h,d,p,F;
printf("Altura do reservat�rio: ");
scanf("%f",&h);
printf("Di�metro da v�lvula: ");
scanf("%f",&d);
printf("Peso do l�quido: ");
scanf("%f",&p);
F=p*h*(3.14*(d*d)/4);
printf("For��o exercida pela coluna desse �quido � de: %.2f\n",F);
system("pause");
}
