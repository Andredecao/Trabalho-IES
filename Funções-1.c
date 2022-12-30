#include <stdio.h>
#include <math.h>

int main() {                          //Programa que calcula a potencia de variáveis
    
    double numero, potencia;          //Para usar esse programa voce deve informar primeiro o numero e depois a potencia 
    
    scanf("%lf", &numero);
    scanf("%lf", &potencia);

    printf("%.1lf elevado a %.1lf eh: %.1lf\n", numero, potencia, pow(numero, potencia));

    return 0;
}
