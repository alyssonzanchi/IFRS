#include <stdio.h>

int main() {
    int n1, n2, n3;
    printf("Informe tres numeros diferentes: ");
    scanf("%d %d %d", &n1, &n2, &n3);
    if(n1 > n2 && n1 > n3) {
        printf("O maior numero eh %d", n1);
    }
    else if(n1 < n2 && n2 > n3) {
        printf("O maior numero eh %d", n2);
    }
    else {
        printf("O maior numero eh %d", n3);
    }
}