#include <stdio.h>

int main() {
    int a, b, c;
    printf("Informe os lados A, B e C do triangulo: ");
    scanf("%d %d %d", &a, &b, &c);
    if(a < b + c && b < a + c && c < a + b) {
        printf("Isso eh um triangulo");
    } else {
        printf("Isso nao eh um triangulo");
    }
}