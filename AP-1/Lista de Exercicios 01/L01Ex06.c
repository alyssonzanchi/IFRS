#include <stdio.h>
#include <stdlib.h>

int main() {
	int nota1, nota2, media;
	printf("Informe a nota da primeira avaliacao: ");
	scanf("%d", &nota1);
	
	printf("Informe a nota da segunda avaliacao: ");
	scanf("%d", &nota2);
	
	media = (nota1 + nota2) / 2;
	printf("A sua media eh %d", media);
	
}
