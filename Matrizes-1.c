#include <stdio.h>

void lermatriz(int matriz[3][3])
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }
}

void printmatriz(int matriz[3][3])
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d  ", matriz[i][j]);
        }
        printf("\n\n");
    }
}

void somaimpares(int matriz[3][3], int impar[3])
{
    int i, j, soma = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (matriz[i][j] % 2 != 0)
                soma += matriz[i][j];
        }
        impar[i] = soma;
        soma = 0;
    }
    for (i = 0; i < 3; i++)
        printf("%d\n", impar[i]);
}

int main()
{

    int matriz[3][3], impar[3];
    lermatriz(matriz);          // Funcao que le a matriz
    printmatriz(matriz);        // Funcao que printa a matriz
    somaimpares(matriz, impar); // Funcao que soma os numeros impares da matriz por linha

    return 0;
}
