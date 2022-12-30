#include <stdio.h>

void lermatriz(int matriz[3][3]) {
    int i, j;
        for(i = 0; i < 3; i++) {
            for(j = 0; j < 3; j++) {
                scanf("%d", &matriz[i][j]);
            }
        }
    }

void printmatriz(int matriz[3][3]) {
    int i, j;
        for(i = 0; i < 3; i++) {
            for(j = 0; j < 3; j++) {
                printf("%d  ", matriz[i][j]);
            }
                printf("\n\n");
        }
    }

int maiordamatriz(int matriz[3][3]) { 
    int i, j; int maior = matriz[0][0];
       for(i = 0; i < 3; i++) {
            for(j = 0; j < 3; j++) {
                if(matriz[i][j] > maior)
                    maior = matriz[i][j];
            }
        }
        return maior;
    }

int menordamatriz(int matriz[3][3]) { 
    int i, j; int menor = matriz[0][0];
       for(i = 0; i < 3; i++) {
            for(j = 0; j < 3; j++) {
                if(matriz[i][j] < menor)
                    menor = matriz[i][j];
            }
        }
        return menor;
    }

int main() {
    
    int matriz[3][3];
    lermatriz(matriz);                                                    //Funcao que le a matriz
    printmatriz(matriz);                                                  //Funcao que printa a matriz
    
    printf("O maior elemento da matriz eh: %d\n", maiordamatriz(matriz)); //Funcao que acha e printa o maior elemento da matriz
    printf("O menor elemento da matriz eh: %d\n", menordamatriz(matriz)); //Funcao que acha e printa o menor elemento da matriz

    return 0;
}
