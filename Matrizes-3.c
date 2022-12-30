#include <stdio.h>

void lermatriz(double matriz[3][4]) {
    int i, j; 
        for(i = 0; i < 3; i++) {
            for(j = 0; j < 4; j++) {
                scanf("%lf", &matriz[i][j]);
            }
        }
    }

void printmatriz(double matriz[3][4]) {
    int i, j;
        for(i = 0; i < 3; i++) {
            for(j = 0; j < 4; j++) {
                printf("%.1lf  ", matriz[i][j]);
            }
                printf("\n\n");
        }
    }

void somalinha(double matriz[3][4], double linha[3]) { 
    int i, j, soma = 0;
       for(i = 0; i < 3; i++) {
            for(j = 0; j < 4; j++) {
                soma += matriz[i][j];
            }
            linha[i] = soma;
            soma = 0;
        }
        for(i = 0; i < 3; i++)
            printf("%.2lf\n", linha[i]);
    }

int main() {
    
    double matriz[3][4], linha[3];
    lermatriz(matriz);             //Funcao que le a matriz
    printmatriz(matriz);           //Funcao que printa a matriz
    somalinha(matriz, linha);      //Funcao que soma as linhas da matriz

    return 0;
}
