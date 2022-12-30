#include <stdio.h>
#include <string.h>

int main() {

    char string[100], auxiliar[100];
    int controle1, controle2, num;
    
    printf("Insira uma frase: ");
    
    scanf("%[^\n]s", string);
    
    num = strlen(string);
    
    controle2 = num - 1;
    
    for(controle1 = 0; controle1 < num; controle1++) {
        
        auxiliar[controle1] = string[controle2];
        
        controle2 = controle2 - 1;
    }

    auxiliar[controle1] = '\0';
    
    printf("\n");
    printf("Frase: %s\n", string);
    printf("Frase modificada: %s\n", auxiliar);

    return 0;
}
