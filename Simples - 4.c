#include <stdio.h>

int main() {
    
    printf("Digite um valor em graus Fahrenheit: ");
    
    float Fahrenheit;
    scanf("%f", &Fahrenheit);
    
    printf("Valor em graus Fahrenheit: %.2f\nValor em graus Celsius: %.2f\n", Fahrenheit, (Fahrenheit - 32.0) * (5.0 / 9.0));
    
    return 0;
}
