#include <stdio.h>
#include <stdlib.h>

int main(){
int matriz[4][4],contpar=0;
    
for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
        printf("[%d][%d]: ",i,j);
        scanf("%d",&matriz[i][j]);
        if(matriz[i][j]%2==0){
            contpar++;
        }
    }
}
printf("Valores pares na matriz: %d",contpar);
}
