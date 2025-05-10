#include <stdio.h>
#include <stdlib.h>

int main(){
int matriz[4][4];
    
for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
        printf("[%d][%d]: ",i,j);
        scanf("%d",&matriz[i][j]);
    }
}
    
printf("Resultado:\n");
    for(int i=0;i<4;i++){
        printf("[%d][%d]: %d\n",i,i,matriz[i][i]);
    }
}
