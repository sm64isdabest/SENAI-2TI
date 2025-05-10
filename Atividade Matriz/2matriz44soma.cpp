#include <stdio.h>
#include <stdlib.h>

int main(){
int matriz1[4][4],matriz2[4][4],matrizSoma[4][4];
    
printf("Digite os valores para a matriz 1:\n");
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            printf("Valor [%d][%d]: ",i,j);
            scanf("%d",&matriz1[i][j]);
    }
}
    
printf("Digite os valores para a matriz 2:\n");
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            printf("Valor [%d][%d]: ",i,j);
            scanf("%d",&matriz2[i][j]);
    }
}
    
// função matrizSoma
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            matrizSoma[i][j]=matriz1[i][j]+matriz2[i][j];
    }
}
    
printf("Resultado:\n");
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            printf("%d ",matrizSoma[i][j]);
        }
        printf("\n");
    }
}