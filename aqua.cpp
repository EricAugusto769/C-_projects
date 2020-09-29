#include <stdio.h>
#include <stdlib.h>
main(){
	float h,d,p,F;
printf("Altura do reservatório: ");
scanf("%f",&h);
printf("Diâmetro da válvula: ");
scanf("%f",&d);
printf("Peso do líquido: ");
scanf("%f",&p);
F=p*h*(3.14*(d*d)/4);
printf("Forção exercida pela coluna desse íquido é de: %.2f\n",F);
system("pause");
}
