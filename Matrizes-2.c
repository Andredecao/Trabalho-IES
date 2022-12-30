#include <stdio.h>

void lermatriz(int matriz[4][4]) {
    int i, j;
        for(i = 0; i < 4; i++) {
            for(j = 0; j < 4; j++) {
                scanf("%d", &matriz[i][j]);
            }
        }
    }

void printmatriz(int matriz[4][4]) {
    int i, j;
        for(i = 0; i < 4; i++) {
            for(j = 0; j < 4; j++) {
                printf("%d  ", matriz[i][j]);
            }
                printf("\n\n");
        }
    }

void somacoluna(int matriz[4][4], int coluna[4]){ 
    int i, j, soma = 0;
       for(i = 0; i < 4; i++) {
            for(j = 0; j < 4; j++) {
                soma += matriz[j][i];
            }
            coluna[i] = soma;
            soma = 0;
        }
        for(i = 0; i < 4; i++)
            printf("%.2d\n", coluna[i]);
    }

int main() {
    
    int matriz[4][4], coluna[4];
    lermatriz(matriz);           //Funcao que le a matriz
    printmatriz(matriz);         //Funcao que printa a matriz
    somacoluna(matriz, coluna);  //Funcao que soma as colunas da matriz

    return 0;
}
