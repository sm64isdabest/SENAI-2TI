#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
int matriz1[6][6],matriz2[6][6],matrizSoma[6][6];
setlocale(LC_ALL,"Portuguese");

printf("Digite os valores para a matriz 1:\n");
    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            printf("Valor [%d][%d]: ",i,j);
            scanf("%d",&matriz1[i][j]);
    }
}

printf("Digite os valores para a matriz 2:\n");
    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            printf("Valor [%d][%d]: ",i,j);
            scanf("%d",&matriz2[i][j]);
    }
}

// função matrizSoma
    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            matrizSoma[i][j]=matriz1[i][j]+matriz2[i][j];
    }
}

printf("Resultado:\n");
    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            printf("%d ",matrizSoma[i][j]);
            if(matrizSoma[i][j]%2==0){
                printf("(Par) ");
            }else{
                printf("(Ímpar) ");
            }
        }
        printf("\n");
    }
}