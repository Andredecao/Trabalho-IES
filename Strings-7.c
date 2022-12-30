#include <stdio.h>
#include <string.h>

int main () {
  
    char primeirastring[100], segundastring[100]; 
  
    int controle;
    
    printf("Insira uma frase: ");
    
    scanf("%[^\n]%*c", primeirastring);
    
    for(controle = 0; controle < strlen(primeirastring); controle++)
        
        segundastring[controle] = primeirastring[controle];
        
            if(!strcmp(segundastring, primeirastring))
            
                printf("Copia da string : %s\n", segundastring);
        
    return 0;
}
