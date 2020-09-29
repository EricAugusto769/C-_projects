#include <stdio.h>
#include<stdlib.h>
#include <cmath>
	main(){
		int x1,y1,x2,y2,d_int;
		float d;
printf("Informe os pontos x1,y1,x2 e y2 respectivamente separadas por espaços");
scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
d=sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
d_int=floor(d);
printf("Dados os pontos informados %d,%d,%d e %d a distancia entre eles é de: %f ou aproximadamente %d\n",x1,x2,y1,y2,d,d_int);
system("pause");
	}
