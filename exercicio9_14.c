#include<stdio.h>

main(){

    int vetor[10];

    for(int i = 0; i < 5; i++){
        printf("Inserir um valor em vetor[%d]", i);
        scanf("%d", &vetor[i]);
    }
    for(int i = 0; i < 5; i++){
        igual = 0;
        for(int j = i+1; j < 10; j++){
            if(vetor[i] == vetor[j]){
                printf("\nValor igual: %d", vetor[i]);
            }
        }
    }
}
