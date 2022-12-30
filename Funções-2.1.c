#include<stdio.h>

int main() {    //Versao com laço do calculo de fatorial
    
    int fatorial, numero;  
    
    scanf("%d", &numero);

    for(fatorial = 1; numero > 1; numero = numero - 1) {
        fatorial = fatorial * numero;
    }

    printf("O fatorial eh: %d\n", fatorial);
    
    return 0;
}
