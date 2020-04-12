#include <stdio.h>

int main() {
    int id, senha;
    printf("Informe o seu codigo de usuario: ");
    scanf("%d", &id);
    printf("Informe sua senha: ");
    scanf("%d", &senha);
    if(id != 1234) {
        printf("Usuario invalido");
    } else if(senha != 9999) {
        printf("Senha incorreta");
    } else {
        printf("Acesso permitido");
    }
}