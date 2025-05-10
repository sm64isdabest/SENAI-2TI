#include <stdio.h>
#include <stdlib.h>

int main(){
int a,cont=0;

do{
    printf("Digite um valor: ");
    scanf("%d",&a);
    if(a>=0){
        cont++;
    }
}while(a>=0);
printf("Quantidade de valores digitados: %d", cont);
}