#include <stdio.h>
#include <stdlib.h>

int main(){
int a,b;

printf("Digite dois valores: ");
scanf("%d%d",&a,&b);

if(a<b){
    printf("Ordem crescente: %d, %d\n",a,b);
}else{
    printf("Ordem crescente: %d, %d\n",b,a);
    }
}