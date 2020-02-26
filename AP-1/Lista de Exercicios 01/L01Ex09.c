#include <stdio.h>
#include <stdlib.h>

int main() {
	int h, m, c, carne, seguranca, carnetotal;
	printf("Informe a quantidade de homens: ");
	scanf("%d", &h);
	
	printf("Informe a quantidade de mulheres: ");
	scanf("%d", &m);
	
	printf("Informe a quantidade de criancas: ");
	scanf("%d", &c);
	
	carne = (h * 400) + (m * 320) + (c * 200);
	seguranca = carne * 0.2;
	carnetotal = carne + seguranca;
	printf("Voce deve comprar %d gramas de carne sem osso", carnetotal);
	
}
