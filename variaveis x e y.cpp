#include <stdio.h>
#include <stdlib.h>
	main(){
		int x,y,yo;
printf("Variável x: ");
scanf("%d",&x);
printf("Variável y: ");
scanf("%d",&y);
yo=x;
x=y;
printf("Variável y: %d\n Variável x: %d\n",yo,x);
system("pause");
	}
