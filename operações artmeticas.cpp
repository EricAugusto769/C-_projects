#include <stdio.h>
#include <stdlib.h>
main(){
	float n1,n2,s,sub,mut,div;
printf("Informe um número: ");
scanf("%f",&n1);
printf("Informe outro número: ");
scanf("%f",&n2);
s= n1+n2;
sub= n1-n2;
mut= n1*n2;
div= n1/n2;
printf("A somas desses nuémros é %f sua subtração é %f sua mutiplicação é %f e sua divisão é %f\n",s,sub,mut,div);
system("pause");
	}
