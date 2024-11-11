#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main(){
	setlocale(LC_ALL,"Portuguese");
	int a,b,op;
	do{
		printf("Digite dois números: ");
		scanf("%d%d",&a,&b);
		printf("Escolha a opção:\n1: Soma\n2: Subtração\n3: Multiplicação\n4: Divisão\n0: Fechar o programa.\n");
		scanf("%d",&op);
		switch(op){
			case 1:
				printf("%d + %d = %d\n",a,b,a+b);
				break;
			case 2:
				printf("%d - %d = %d\n",a,b,a-b);
				break;
			case 3:
				printf("%d * %d = %d\n",a,b,a*b);
				break;
			case 4:
				printf("%d / %d = %d\n",a,b,a/b);
				break;
			case 0:
				printf("Você decidiu sair.\n");
				break;
			default:
				printf("Opção inválida.\n");
		}
	}while(op!=0);	
}
