#include <stdio.h>
#define TRUE 1
#define FALSE 0

int numeropalavras(char string[]) {
    
    int contar, controle, variavel = FALSE;
    
        for(controle = contar = 0; string[controle]; controle++) {
        
            if(string[controle] != ' ' && !variavel) 
            
                variavel = TRUE;
        
            if((string[controle] == ' ' || string[controle] == '\0') && variavel) { 
                
                variavel = FALSE;

                contar++;
        }
    }
    
    printf("O numero de palavras separadas por espacos em branco eh: \n");
    
    return contar; 
}

int main(){
    
    char string[100];
    
    printf("Insira uma frase: \n");
    
    scanf("%[^\n]%*c", string);
    
    printf("%d\n", numeropalavras(string));
    
    return 0;
}
