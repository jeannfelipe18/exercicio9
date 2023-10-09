#include <stdio.h>

int main() {
    int tamanho = 50;
    int vetor[tamanho];

    for (int i = 0; i < tamanho; i++) {
        vetor[i] = (i + 51) % (i + 1);
    }

    printf("Vetor: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    
    return 0;
}
