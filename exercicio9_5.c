#include <stdio.h>

main() {

    int vetor[10], qtdPares = 0;

    for (int i = 0; i < 10; i++) {
        printf("Digite os numeros");
        scanf("%d", &vetor[i]);
        if(vetor[i] % 2 == 0){
            printf("\nNumero inserido par: %d", vetor[i]);
            qtdPares++;
        }else{
            printf("\nNumero inserido impar: %d", vetor[i]);
        }
    }
    printf("Quantidade de pares: %d", qtdPares);
}
