#include <stdio.h>
#include <stdlib.h>

int main(){
int a;

printf("Digite um a: ");
scanf("%d",&a);

if(a>10){
    printf("Maior que 10.\n");
}else if(a<10){
    printf("Menor que 10.\n");
}else{
    printf("Igual a 10.\n");
    }
}
