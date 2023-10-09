#include <stdio.h>

int main() {
    int vetor[20];
    int vetor_sem_repeticao[20];
    int tamanho = 0; // Tamanho atual do vetor sem repetição

    // Ler o vetor com 20 números inteiros
    printf("Digite 20 números inteiros:\n");
    for (int i = 0; i < 20; i++) {
        scanf("%d", &vetor[i]);
    }

    // Verificar e eliminar elementos repetidos
    for (int i = 0; i < 20; i++) {
        int repetido = 0;

        // Verifica se o elemento já está no vetor_sem_repeticao
        for (int j = 0; j < tamanho; j++) {
            if (vetor[i] == vetor_sem_repeticao[j]) {
                repetido = 1;
                break;
            }
        }

        // Se não for repetido, adiciona ao vetor_sem_repeticao
        if (!repetido) {
            vetor_sem_repeticao[tamanho] = vetor[i];
            tamanho++;
        }
    }

    // Imprime o vetor sem elementos repetidos
    printf("Vetor sem elementos repetidos:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor_sem_repeticao[i]);
    }

    return 0;
}
