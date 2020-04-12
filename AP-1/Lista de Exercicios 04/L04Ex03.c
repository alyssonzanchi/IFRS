#include <stdio.h>

int main() {
    int num, resto, divisor = 2, primo = 1;
    printf("Informe um numero: ");
    scanf("%d", &num);
    if (num <= 1) 
        primo = 0;
    while (primo == 1 && divisor <= num / 2) {
        resto = num % divisor;
        if (resto == 0)
            primo = 0;
            divisor = divisor + 1;
    } if (primo == 1) {
        printf("%d eh primo!", num);
    } else {
        printf("%d nao eh primo!", num);
    }
}