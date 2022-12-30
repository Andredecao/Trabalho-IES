#include <math.h>
#include <stdio.h>

int main() {
    printf("Digite dois números: ");

    float numero1, numero2, soma, produto_do_primeiro_pelo_quadrado_do_segundo,
        quadrado_do_primeiro, soma_dos_quadrados,
        diferenca_do_primeiro_pelo_segundo;

    scanf("%f%f", &numero1, &numero2);

    soma = numero1 + numero2;

    produto_do_primeiro_pelo_quadrado_do_segundo =
        numero1 * (numero2 * numero2);

    quadrado_do_primeiro = numero1 * numero1;

    soma_dos_quadrados = (numero1 * numero1) + (numero2 * numero2);

    diferenca_do_primeiro_pelo_segundo = numero1 - numero2;

    printf(
        "A soma desses dois números eh: %.3f\nO produto do primeiro pelo "
        "quadrado do segundo eh: %.3f\n",
        soma, produto_do_primeiro_pelo_quadrado_do_segundo);

    printf(
        "O quadrado do primeiro eh: %.3f\nA raiz quadrada da soma dos "
        "quadrados eh: %.3f\n",
        quadrado_do_primeiro, sqrt(soma_dos_quadrados));

    printf("O seno da diferenca do primeiro numero pelo segundo eh: %.3f\n",
           sin(diferenca_do_primeiro_pelo_segundo));

    printf("O modulo do primeiro numero eh: %.3f\n", fabs(numero1));
    return 0;
}
