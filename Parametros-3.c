#include <stdio.h>

void menornumero(int variavel[], int num) {
    
    int controle, menor = variavel[0];
        
        for(controle = 0; controle < num - 1; controle++) {
            if(menor > variavel[controle])
                menor = variavel[controle];
        }
            printf("Menor numero eh: %d\n", menor);
}

void medianumeros(int variavel[], int num) {
    
    int controle; 
    double soma;
    
    for(controle = 0; controle < num; controle++) {
        
        soma += variavel[controle];
    }
        printf("Media dos numeros eh: %.2lf\n", soma / num);
}

void maiornumero(int variavel[], int num) {
    
    int controle, maior = variavel[0];
        
        for(controle = 0; controle < num - 1; controle++) {
            if(maior < variavel[controle])
                maior = variavel[controle];
        }
            printf("Maior numero eh: %d\n", maior);
}

void ler(int variavel[], int num) {
    
    int controle;
    
    for(controle = 0; controle < num; controle++)
        
        scanf("%d", &variavel[controle]);
}

int main() {
    
    int numero;
    
    printf("Insira a quantidade de numeros que o vetor tera: \n");
    
    scanf("%d", &numero);

    int variavel[numero];
    
    printf("Entre com %d numeros (o ultimo numero inserido servira como flag para o programa parar): \n", numero);
    
    ler (variavel, numero);                // Funcao que le o vetor
    menornumero (variavel, numero);        // Funcao do menor numero
    medianumeros (variavel, numero);       // Funcao da media dos numeros
    maiornumero (variavel, numero);        // Funcao do maior numero
    
    return 0;
}
