#include <stdio.h>

int main() {
    int nota;
    printf("Informe a nota: ");
    scanf("%d", &nota);
    if(nota >= 7) {
        printf("Aluno aprovado!");
    } else {
        printf("Aluno reprovado!");
    }
}