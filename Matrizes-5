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

void diagonalprincipal(int matriz[4][4]) { 
    int i, j;
       for(i = 0; i < 4; i++) {
            for(j = 0; j < 4; j++) {
                if(i == j)
                    printf("%d  ", matriz[i][j]);
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
    diagonalprincipal(matriz);     //Funcao que printa os elementos da diagonal principal

    return 0;
}
