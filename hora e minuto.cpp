#include <stdio.h>
#include <stdlib.h>
	main(){
		int he,me,hs,ms,hf,mf;
printf("Que horas você chegou(Obs:Escreva a hora e o minuto separado por dois pontos): ");
scanf("%d:%d",&he,&me);
printf("Em que horas você saiu(Obs:Escreva a hora e o minuto separado por dois pontos):");
scanf("%d:%d",&hs,&ms);
hf=hs-he;
mf=ms-me;
printf("Você chegou %d:%d e saiu %d:%d entaõ você ficou %d horas e %d minutos no trabalho :)\n",he,me,hs,ms,hf,mf);
system("pause");	
}
