#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main(){
	setlocale(LC_ALL,"Portuguese");
	int a,b,op;
	do{
		printf("Digite dois n�meros: ");
		scanf("%d%d",&a,&b);
		printf("Escolha a op��o:\n1: Soma\n2: Subtra��o\n3: Multiplica��o\n4: Divis�o\n0: Fechar o programa.\n");
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
				printf("Voc� decidiu sair.\n");
				break;
			default:
				printf("Op��o inv�lida.\n");
		}
	}while(op!=0);	
}
