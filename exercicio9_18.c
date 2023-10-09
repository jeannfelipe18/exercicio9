#include <stdio.h>

int main() {
    int vetor[10];
    int r;
    int contador = 0;

    // Leitura do vetor
    printf("Digite 10 números:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    // Leitura do número r
    printf("Digite um número r: ");
    scanf("%d", &r);

    // Verificação e contagem dos múltiplos de r no vetor
    printf("Múltiplos de %d no vetor:\n", r);
    for (int i = 0; i < 10; i++) {
        if (vetor[i] % r == 0) {
            printf("%d\n", vetor[i]);
            contador++;
        }
    }

    // Exibir o total de múltiplos encontrados
    printf("Total de múltiplos de %d no vetor: %d\n", r, contador);

    return 0;
}
