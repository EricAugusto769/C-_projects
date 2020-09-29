#include <stdio.h>
#include <stdlib.h>
	main(){
		int n1,n2,r;
printf("Digite um número: ");
scanf("%d",&n1);
printf("Digite outro número: ");
scanf("%d",&n2);
r=n1+n2;
	if (r>50){
r=r+10;
printf("Resultado final= %d\n",r);
}
	else{	
r=r-15;
printf("Resiltado final= %d\n",r);
}
system("pause");
	}
