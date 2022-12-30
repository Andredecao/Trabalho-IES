#include <stdio.h>

int contacaractere(char *frase) {     // Esta funcao conta os caracteres

    int controle;

    for(controle = 0; frase[controle] != '\0'; controle++) {

    }

    return controle;
}

int caracterepontuacao(char *frase) {    // Esta funcao conta os caracteres de pontuação

    char *pont;
    int cont1, cont2, total = 0;

    pont = ",.;:!?()-";

    for(cont1 = 0; frase[cont1]; cont1++) {

        for(cont2 = 0; pont[cont2]; cont2++) {

            if(frase[cont1] == pont[cont2]) {

                total++;

                if(frase[cont1+1] == '.') {

                    if(frase[cont1+2] == '.') {
                        cont1 = cont1 + 2;
                    }
                }
            }
        }
    }

    return total;
}

int caracterenumerico(char *frase) {    // Esta funcao conta os caracteres numericos

    int cont1, total = 0;

    for(cont1 = 0; frase[cont1]; cont1++) {

        if( (frase[cont1] >= '0') && (frase[cont1] <= '9') ) {

            total++;
        }
    }
    return total;
}

int caractereminusculo(char *frase) {    // Esta funcao conta os caracteres minusculos

    int cont, total = 0;

    for(cont = 0; frase[cont]; cont++) {

        if( (frase[cont] >= 'a') && (frase[cont] <= 'z') ) {

            total++;
        }
    }
    return total;
}

int main(){

    char frase[80];

    printf("Escreva uma frase\n");
    fgets(frase, 80, stdin);

    printf("Numero de caracteres: %d\n", contacaractere(frase));

    printf("Numero de caracteres de pontuação: %d\n", caracterepontuacao(frase));

    printf("Numero de caracteres numericos: %d\n", caracterenumerico(frase));

    printf("Numero de caracteres minusculos: %d\n", caractereminusculo(frase));

    return 0;
}
