#include <stdio.h>
#include <stdlib.h>
main(){
	float n1,n2,s,sub,mut,div;
printf("Informe um n�mero: ");
scanf("%f",&n1);
printf("Informe outro n�mero: ");
scanf("%f",&n2);
s= n1+n2;
sub= n1-n2;
mut= n1*n2;
div= n1/n2;
printf("A somas desses nu�mros � %f sua subtra��o � %f sua mutiplica��o � %f e sua divis�o � %f\n",s,sub,mut,div);
system("pause");
	}
