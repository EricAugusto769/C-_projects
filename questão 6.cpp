#include<stdio.h>
#include<stdlib.h>
	main(){
		int n1,n2;
printf("Informe um número: ");
scanf("%d",&n1);
printf("Informe outro número: ");
scanf("%d",&n2);
	if(((n1>0)&&(n2>0))||((n1<0)&&(01<0))){
		printf("1");
	}
	else if (((n1>0)&&(n2<0))||((n1<0)&&(n2>0))){
		printf("2");
	}
	else if (n1==0||n2==0){
		printf("3");
	}
system("pause");
	}
