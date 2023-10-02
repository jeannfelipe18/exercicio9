#include <stdio.h>

main() {

    int vetor[10], maior,menor, pMaior, pMenor;

    for (int i = 0; i < 10; i++) {
        printf("Digite os numeros");
        scanf("%d", &vetor[i]);
    }
    maior = vetor[0];
    menor = vetor[0];

    for(int i = 0 ; i < 5; i++){
        if(vetor[i] > maior){
            maior = vetor[i];
            pMaior = i;
        }
         if(vetor[i] > menor){
            menor = vetor[i];
            pMenor = i;
        }
    }
    printf("Maior: %d esta na posicao %d. \n Menor: %d esta na posicao %d", maior,pMaior,menor,pMenor);
}