#include <stdio.h>
#include <stdlib.h>
main(){
	float N1,N2,N3,M;
printf("Informe sua primeira nota: ");
scanf("%f",&N1);
printf("Segunda nota: ");
scanf("%f",&N2);
printf("Terceira nota: ");
scanf("%f",&N3);
M=(N1*2+N2*3+N3*5)/10;
printf("Sua nota final é: %f\n",M);
system("pause");
}
