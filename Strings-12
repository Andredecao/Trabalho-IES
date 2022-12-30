#include <stdio.h>
#include <ctype.h>
#include <string.h>


int main() {
    
    char string[100]; 
    int posicao;
    
    printf("Insira uma frase: ");
    
    scanf("%[^\n]%*c", string);
    
    for(posicao = 0; posicao < strlen(string); posicao++)
        
        if(isspace(string[posicao])) {
            
            printf("O espaco em branco foi encontrado no endereco: %d\n", posicao);
            
            break;
        }
    
    return 0;
}
