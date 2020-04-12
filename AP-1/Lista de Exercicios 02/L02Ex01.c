#include <stdio.h>

int main() {
    float metros;
    int resultado;
    printf("Informe a quantidade de metros: ");
    scanf("%f", &metros);
    resultado = metros * 100;
    printf("O resultado em centimetros é %d", resultado);
    return 0;
}