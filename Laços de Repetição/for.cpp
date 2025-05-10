#include <stdio.h>
#include <stdlib.h>

int main(){
int a;

printf("Digite um valor: ");
scanf("%d",&a);
printf("Divisores de %d:\n",a);
for(int i=1;i<=a;i++){
    if(a%i==0){
        printf("%d ",i);
        }
    }
}
