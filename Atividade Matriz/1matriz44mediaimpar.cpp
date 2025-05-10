#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
int matriz[4][4],contImpar=0,soma=0;
setlocale(LC_ALL,"Portuguese");

for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
        printf("[%d][%d]: ",i,j);
        scanf("%d",&matriz[i][j]);
        if(matriz[i][j]%2!=0){
            soma+=matriz[i][j];
            contImpar++;
        }
    }
}

if(contImpar>0){
    float media=(float)soma/contImpar;
    printf("Média dos ímpares: %.2f",media);
}else{
    printf("Não há valores ímpares.");
    }
}
