#include<stdio.h>

int main(){

    int valores[5], maior, menor, pMaior, pMenor;

     for(int i = 0; i < 5; i++){
        printf("Inserir um valor em valores [%d]", i);
        scanf("%d", &valores[i]);
    }
    
    maior = valores[0];
    menor = valores[0];

    for(int i = 0; i < 5; i++){
        if(valores[i] > maior){
            maior = valores[i];
            pMaior = i;
        }else{
            menor = valores[i];
            pMenor = i;
        }
    }
    printf("Posicao do maior: %d. Posicao do Menor: %d", pMaior,pMenor);
}
