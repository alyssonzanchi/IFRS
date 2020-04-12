#include <stdio.h>

int main() {
    char a, b, c, d, op;
    float saldo = 0, saque = 0, deposito = 0;
    do {
        printf("\n\n(a) Consultar Saldo\n(b) Saque\n(c) Deposito\n(d) Sair\n", op);
        scanf(" %c", &op); 
        if (op == 'a') { 
            printf("O seu saldo eh R$ %.2f", saldo);
        } else if (op == 'b') {
            printf("Informe o valor a ser sacado: ");
            scanf("%f", &saque);
            printf("Voce sacou R$ %2.f da sua conta", saque);
            saldo = saldo - saque;
            printf("\nSaldo atual R$ %2.f", saldo);
        } else if (op == 'c') {
            printf("Informe o valor a ser depositado: ");
            scanf("%f", &deposito);
            printf("Voce depositou R$ %2.f da sua conta", deposito);
            saldo = saldo + deposito;
            printf("\nSaldo atual R$ %2.f", saldo);
        } else if (op == 'd') {
            printf("Operacao cancelada pelo usuario");
        } else {
            printf("Opcao invalida");
        } 
    } while (op != 'd');
}