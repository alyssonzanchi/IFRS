#include <stdio.h>

int main() {
    int numero;
    printf("Informe um número: ");
    scanf("%d", &numero);
    if(numero > 0) {
        printf("O número é positivo");
    }
    else if(numero < 0) {
        printf("O numero e negativo");
    }
    else {
        printf("O número é nulo");
    }
}