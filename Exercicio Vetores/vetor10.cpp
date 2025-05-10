#include <stdio.h>
#include <stdlib.h>

int main(){
int vetor[10];

for(int i=0;i<10;i++){
    printf("Digite o valor %d: ",i+1);
    scanf("%d",&vetor[i]);
}

printf("Valores:\n");
for(int i=0;i<10;i++){
    printf("%d\n",vetor[i]);
    }
}