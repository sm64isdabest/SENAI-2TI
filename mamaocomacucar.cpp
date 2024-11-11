#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main(){
	setlocale(LC_ALL,"Portuguese");
	float a;
	int op;
	do{
		printf("Digite o valor da compra: ");
		scanf("%f",&a);
		printf("Escolha quantas parcelas:\n5x \n10x \n12x \n24x\nDigite 0 para cancelar a compra.\n");
		scanf("%d",&op);
		switch(op){
			case 5:
				printf("%f reais durante 5 meses.\n",a/5);
				break;
			case 10:
				printf("%f reais durante 10 meses.\n",a/10);
				break;
			case 12:
				printf("%f reais durante 12 meses.\n",a/12);
				break;
			case 24:
				printf("%f reais durante 24 meses.\n",a/24);
				break;
			case 0:
				printf("Você decidiu cancelar a compra.\n");
				break;
			default:
				printf("Opção inválida.\n");
		}
	}while(op!=0);	
}
