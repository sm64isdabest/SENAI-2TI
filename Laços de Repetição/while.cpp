#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
int a,i=1;
setlocale(LC_ALL,"Portuguese");

printf("Digite um valor inteiro positivo: ");
scanf("%d",&a);

if(a>0){
    printf("Múltiplos de 5 entre 1 e %d:\n",a);
    while(i<=a){
        if(i%5==0){
            printf("%d ",i);
        }
        i++;
        }
    }
}