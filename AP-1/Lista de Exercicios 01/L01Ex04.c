#include <stdio.h>

int main() {
	
	int base, altura, area;
	printf("Informe a area da base do triangulo: ");
	scanf("%d", &base);
	
	printf("Informe a altura do triangulo: ");
	scanf("%d", &altura);
	
	area = base * altura / 2;
	printf("A area do triangulo eh %d", area);

}
