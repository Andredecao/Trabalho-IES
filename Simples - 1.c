#include <stdio.h>

int main() {
    
    printf("Digite um valor em metros: ");
    
    int comprimento;
    scanf("%d", &comprimento);
    
    printf("Valor em metros: %d\nValor em decímetros: %d\nValor em centímetros: %d\nValor em milímetros: %d\n", comprimento, comprimento * 10, comprimento * 100, comprimento * 1000);

    return 0;
}
