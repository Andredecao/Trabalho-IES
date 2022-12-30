#include <stdio.h>

double fatorial(int numero) {  //Funcao recursiva do calculo de fatorial
    double valorfatorial;
  
    if (numero <= 1)
        return (1);
    else
        valorfatorial = numero * fatorial(numero - 1);
            return (valorfatorial); 
}    

int main() {
  
    int numero;
    double f;
  
    scanf("%d",&numero);
  
    f = fatorial(numero);
  
    printf("O fatorial de %d eh: %.0lf", numero, f);
  
    return 0;
}
