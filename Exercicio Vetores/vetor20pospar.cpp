#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
int vetor[20];
setlocale(LC_ALL,"Portuguese");

for(int i=0;i<20;i++){
    printf("Digite o valor %d: ",i+1);
    scanf("%d",&vetor[i]);
}

printf("Posições dos valores pares:\n");
for(int i=0;i<20;i++){
    if(vetor[i]%2==0){
        printf("%d está em [%d]\n", vetor[i], i);
        }
    }
}
