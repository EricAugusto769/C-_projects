#include<stdio.h>
#include<stdlib.h>
	main(){
		int idade,nc;
printf("Informe sua idade: ");
scanf("%d",&idade);
printf("Digite 1 se voce e brasileiro e 2 se voce e estrangeiro");
scanf("%d",&nc);
	if ((idade>18)&&(nc==1))
printf("Parabens você pode participar do concurso!\n");
	else 
printf("Voce nao pode participar do concurso\n");
system("pause");
		}
