#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
int vetor[6],soma=0;
setlocale(LC_ALL,"Portuguese");

for(int i=0;i<6;i++){
    printf("Digite o valor %d: ",i+1);
    scanf("%d",&vetor[i]);
    if(vetor[i]%2!=0){
        soma+=vetor[i];
    }
}
printf("Soma dos valores ímpares: %d",soma);
}
