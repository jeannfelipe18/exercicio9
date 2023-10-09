#include <stdio.h>

// Função para mostrar o vetor na ordem direta
void mostrarOrdemDireta(float vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%.2f ", vetor[i]);
    }
    printf("\n");
}

// Função para mostrar o vetor na ordem inversa
void mostrarOrdemInversa(float vetor[], int tamanho) {
    for (int i = tamanho - 1; i >= 0; i--) {
        printf("%.2f ", vetor[i]);
    }
    printf("\n");
}

int main() {
    float vetor[5];
    int codigo;

    // Leitura dos números
    for (int i = 0; i < 5; i++) {
        printf("Digite um número para a posição %d: ", i + 1);
        scanf("%f", &vetor[i]);
    }

    do {
        printf("Digite o código (0 para sair, 1 para ordem direta, 2 para ordem inversa): ");
        scanf("%d", &codigo);

        switch (codigo) {
            case 0:
                printf("Programa finalizado.\n");
                break;
            case 1:
                mostrarOrdemDireta(vetor, 5);
                break;
            case 2:
                mostrarOrdemInversa(vetor, 5);
                break;
            default:
                printf("Código inválido. Tente novamente.\n");
                break;
        }
    } while (codigo != 0);

    return 0;
}
