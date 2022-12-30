#include <stdio.h>
#include <math.h>

int fatorial(int a) { //Funcao para calcular o fatorial
    
    if(a == 0) return 1;   
        else 
            return a * fatorial(a - 1);
}

int main() {
    
    int a; double b, c, soma = 1;
        scanf("%lf",&c);
    
    for(a = 1; ; a++) { 
        b = c * a / fatorial(a);
        
        if(b < pow(10, -6)) 
            break;
                soma += b;
    }
                    printf("%lf", soma);
    return 0;
}
