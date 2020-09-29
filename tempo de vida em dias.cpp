#include <stdio.h>
#include <stdlib.h>
main(){
	int ano,meses,dias,T_dias;
printf("Ano que nasceu: ");
scanf("%d",&ano);
printf("número de meses: ");
scanf("%d",&meses);
printf("número de dias: ");
scanf("%d",&dias);
T_dias=(meses*30)+(2019-ano)*365+dias;
printf("Você já viveu %d dias \n",T_dias);
system("pause");
}
