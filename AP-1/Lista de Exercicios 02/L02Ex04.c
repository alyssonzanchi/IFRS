#include <stdio.h>

int main() {
    int numero;
    printf("Informe um número: ");
    scanf("%d", &numero);
    if(numero >= 0) {
        printf("O número é positivo");
    }
    else {
        printf("O número é negativo");
    }
}
