#include<stdlib.h>
#include<stdio.h>
 
 main()
{
 float V_P,V_PG,T;
  
 printf("Informe o valor do produto: ");
 scanf("%f", &V_P);
  
 printf("Valor pago: ");
 scanf("%f", &V_PG);
 T=V_PG-V_P; 
 if (T<0)
{
	T=T*-1;
printf("AInda faltam R$%f",T);
}
 else 
 {
	 printf("O troco é: %f",T);
 }
 system("pause");
}
