#include <stdio.h>

main() {

    int vetor[10], maior, pMaior = 0;

    for (int i = 0; i < 10; i++) {
        printf("Digite os numeros");
        scanf("%d", &vetor[i]);
    }
    maior = vetor[0];
    
    for (int i = 0; i < 5; i++){
        printf("%d",vetor[i]);
        if(vetor[i] > maior){
            maior = vetor[i];
            pMaior = i;
        }
    }
    printf("\n\nMaior: %d esta na posicao %d.", maior, pMaior);
}