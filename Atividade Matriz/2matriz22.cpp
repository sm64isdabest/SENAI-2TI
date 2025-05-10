#include <stdio.h>
#include <stdlib.h>

int main(){
int matriz1[2][2],matriz2[2][2];
    
printf("Digite os valores para a matriz 1:\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("Valor [%d][%d]: ",i,j);
            scanf("%d",&matriz1[i][j]);
    }
}
    
printf("Digite os valores para a matriz 2:\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("Valor [%d][%d]: ",i,j);
            scanf("%d",&matriz2[i][j]);
    }
}
    
printf("Matriz 1:\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d ",matriz1[i][j]);
        }
        printf("\n");
    }
    
printf("Matriz 2:\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d ",matriz2[i][j]);
        }
        printf("\n");
    }
}
