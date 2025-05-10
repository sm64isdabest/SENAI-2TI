#include <stdio.h>
#include <stdlib.h>

int main(){
int nota1,nota2,nota3,media;

printf("Digite a primeira nota: ");
scanf("%d",&nota1);
printf("Digite a segunda nota: ");
scanf("%d",&nota2);
printf("Digite a terceira nota: ");
scanf("%d",&nota3);

media=(nota1+nota2+nota3)/3;

if(media>=7){
    printf("Aprovado!");
}else{
    printf("Reprovado!");
    }
}
