#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void deslocar(char frase[], char letra, int posicao) {
    
    int controle;

    for(controle = strlen(frase) + 1; controle > posicao; controle--) {
        frase[controle] = frase[controle - 1];
    }
    
    frase[posicao] = letra;
}

int main() {

    char frase[25], letra;
    int posicao;

    printf("Digite algo: \n");
    scanf("%s", frase);

    scanf("%c", &letra);

    printf("Digite uma posicao: \n");
    scanf("%d", &posicao);

    printf("%s\n", frase);

    deslocar(frase, letra, posicao - 1);

    printf("%s\n", frase);

    return 0;
}
