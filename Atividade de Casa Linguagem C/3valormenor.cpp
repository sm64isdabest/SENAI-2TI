#include <stdio.h>
#include <stdlib.h>

int main(){
int a,b,c,menor;

printf("Digite 3 valores: ");
scanf("%d%d%d",&a,&b,&c);

menor=a;
if(b<menor){
    menor=b;
}
if(c<menor){
    menor=c;
}
printf("Menor valor: %d",menor);
}
