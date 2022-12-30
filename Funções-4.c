#include <stdio.h>

int formasdepagamento() {  // Funcao que mostra as opcoes de pagamento

    int formas;

    printf("Formas de pagamento:\n");

    printf("1 - A vista com desconto\n");
    printf("2 - 2 vezes\n");
    printf("3 - 3 a 10 vezes com juros\n");

    scanf("%d", &formas);

    printf("\n\n");

    return formas;
}

float avista(float valor) {  // Funcao caso a opcao de compra seja a vista

    printf("Total: %.2f reais\n", valor);
    printf("Total a pagar: %.2f reais\n", valor * 0.9);

    return 0;
}

float duasvezes(
    float valor) {  // Funcao caso a opcao de compra seja de duas vezes

    printf("Total: %.2f reais\n", valor);
    printf("2 parcelas de %.2f reais cada\n", valor / 2);

    return 0;
}

float tresvezes(
    float valor) {  // Funcao caso a opcao de compra seja de tres a dez vezes

    int parcelas;

    printf("Total: %.2f reais\n", valor);

    do {
        printf("Quantidade de parcelas\n");
        scanf("%d", &parcelas);

    } while ((parcelas > 10) || (parcelas < 3));

    printf("%d parcelas de %.2f reais cada\n", parcelas,
           (valor * 1.03) / parcelas);

    return 0;
}

int main() {
    int formadepagamento;
    float valordacompra;

    printf("Insira o valor total da compra: \n");
    scanf("%f", &valordacompra);
    printf("\n\n");

    switch (formasdepagamento()) {
        case 1:
            printf("Pagamento a vista\n");
            avista(valordacompra);
            break;
        case 2:
            printf("Pagamento em duas vezes\n");
            duasvezes(valordacompra);
            break;
        case 3:
            printf("Pagamento em tres vezes ou mais\n");
            tresvezes(valordacompra);
            break;
        default:
            printf("Compra não concluida\n");
    }
    return 0;
}
