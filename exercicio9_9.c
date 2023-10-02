#include <stdio.h>

main() {

    int vetor[6], contador = 0, num;

    do{
        printf("\nDigite numero par");
        scanf("%d",&num);
        if(num % 2 == 0){
            vetor[contador] = num;
            contador++;
        }else{
            printf("Numero impar - Digite um numero par");
        }

    }while(contador < 6);


    for (int i = 0; i < 6; i++) {
        printf("\nDigite os numeros");
        scanf("%d", &vetor[i]);
    }
    for (int i = 5; i >= 6; i++) {
        printf("\nDigite os numeros");
        scanf("%d", &vetor[i]);
    }

}