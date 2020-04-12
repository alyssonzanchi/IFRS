#include <stdio.h>

int main() {
    int valor;
    do {
        printf("Informe um valor: ");
        scanf("%d", &valor);
        printf("%d", valor);
    } while (valor < 1 && valor > 10);
}