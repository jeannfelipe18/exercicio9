#include<stdio.h>
#define TAM 5

main(){

    float numReais[10], qtdNegativos = 0, soma = 0;

    for(int i = 0; i< 10; i++){
        printf("Inserir um valor e numReais[%d]", i);
        scanf("%f", &numReais[i]);

        if(numReais[i] < 0){
            qtdNegativos++;
        }else{
            soma += numReais[i];
        }
    }
    printf("Quantidade negativos: %f e soma dos positivos: %f",qtdNegativos, soma);
}