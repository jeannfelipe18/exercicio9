#include<stdio.h>
#include<math.h>

main(){

    int x[5], y[5];

    for(int i = 0; i < 5; i++){
        printf("\nDigite o numero do vetor x: ");
        scanf("%d", &x[i]);
        y[i] = x[i] * x[i];
        y[i] = pow(x[i], 2);
    }
    for(int i = 0; i < 5; i++){
        printf("\nValores de x[%d] = %d e Valores de y[%d] = %d", i, x[i], i, y[i]);
    }
}