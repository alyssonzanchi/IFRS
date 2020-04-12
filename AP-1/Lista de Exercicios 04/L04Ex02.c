#include <stdio.h>

int main() {
    int cont = 2, num, soma = 0;
    printf("Ate que numero devemos contar? ");
    scanf("%d", &num);
    while (cont <= num) {
        soma = soma + cont;
        printf("Contador = %d\nSoma = %d\n", cont, soma);
        cont = cont + 2;
    }
}