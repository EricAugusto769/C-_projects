#include <stdio.h>
#include <stdlib.h>
	main(){
		int R,S,A,B,C;
		float D;
printf("Informe o valor de A: ");
scanf("%d",&A);
printf("Agora o valor de B: ");
scanf("%d",&B);
printf("Agora o de C: ");
scanf("%d",&C);
R=(A+B)^2;
S=(B+C)^2;
D=(R+S)/2;
printf("O valor de D é: %.2f",D);
system("pause");
	}
