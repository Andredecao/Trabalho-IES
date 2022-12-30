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

void diagonalsecundaria(int matriz[4][4]) { 
    int i, j;
       for(i = 0; i < 4; i++) {
            for(j = 0; j < 4; j++) {
                if(i == j)
                    printf("%d  ", matriz[i][4 - 1 - i]);
            else
                    printf("  ");
            }
                    printf("\n");        
       }
    }

int main() {
    
    int matriz[4][4];
    lermatriz(matriz);             //Funcao que le a matriz
    printmatriz(matriz);           //Funcao que printa a matriz
    diagonalsecundaria(matriz);    //Funcao que printa os elementos da diagonal secundaria

    return 0;
}
