#include <stdio.h>

int main() {
    int a, b, c;
    printf("Informe tres valores diferentes: ", a, b, c);
    scanf("%d %d %d", &a, &b, &c);
    if(a > c && b > c) {
        printf("A soma eh %d", a + b);
    } else if(a > b && c > b) {
        printf("A soma eh %d", a + c);
    } else {
        printf("A soma eh %d", b + c);
    }
}