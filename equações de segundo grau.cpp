#include <stdio.h>
#include <stdlib.h>
#include <cmath>
#include<math.h>
	main(){
		int a,b,c;
		float x1,x2,delta;
printf("Informe o valor de a: ");
scanf("%d",&a);
printf("Agora o valor de b: ");
scanf("%d",&b);
printf("Agora o de c: ");
scanf("%d",&c);
delta=sqrt((b*b)-4*a*c);
x1=-b+delta/(2*a);
x2=-b-delta/(2*a);
printf("Lenvando em consideração as informações %f dadas as raizes dessa equação são x1= %f x2= %f\n",delta,x1,x2);
system("pause");
	}
