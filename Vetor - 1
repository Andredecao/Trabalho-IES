#include <stdio.h>
#define TAMANHO 10

int main() {
    int vetor[TAMANHO], i, maior, menor;

    for (i = 0; i < TAMANHO; i++) {
        scanf("%i", &vetor[i]);
    }

    maior = vetor[0];

    for (i = 1; i < TAMANHO; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
    }

    printf("\nVetor: ");

    for (i = 0; i < TAMANHO; i++) {
        printf("%i ", vetor[i]);
    }

    printf("\nMaior valor: %i\n", maior);

    for (i = 0; i < TAMANHO; i++) {
        if (vetor[i] < menor) {
            menor = vetor[i];
        }
    }

    printf("Menor valor: %i\n", menor);
    
    return 0;
}
