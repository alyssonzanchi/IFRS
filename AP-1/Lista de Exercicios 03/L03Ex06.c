#include <stdio.h>

int main() {
    int golsTimeA, golsTimeB;
    char timeA[24], timeB[24];
    printf("Informe o nome dos times e o placar final do jogo: ", timeA, timeB, golsTimeA, golsTimeB);
    scanf("%s %s %d %d", &timeA, &timeB, &golsTimeA, &golsTimeB);
    if(golsTimeA > golsTimeB) {
        printf("O time vencedor foi %s", timeA);
    } else if(golsTimeB > golsTimeA) {
        printf("O time vencedor foi %s", timeB);
    } else {
        printf("EMPATE");
    }
}