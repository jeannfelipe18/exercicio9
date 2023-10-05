#include<stdio.h>

int main(){

    int valores[5], soma = 0, maior, menor, media;

    for(int i = 0; i < 5; i++){
        printf("Inserir um valor em valores [%d]", i);
        scanf("%f", &valores[i]);
        soma += valores[i];
    }
    maior = valores[0];
    menor = valores[0];

    for(int i = 0; i < 5; i++){
        printf("Dados em valores [%d] = %d", i, valores[i]);
        if(valores[i] > maior){
            maior = valores[i];
        }else if(valores[i] < menor){
            menor = valores[i];
        }
    }
    media = soma/5;
    printf("A media dos valores: %d", media);
    printf("Menor: %d. Maior: %d",maior,menor);
}