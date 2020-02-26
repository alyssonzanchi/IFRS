#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int fahrenheit, celsius;
	printf("Informe os graus em fahrenheit: ");
	scanf("%d", &fahrenheit);
	
	celsius = (fahrenheit - 32) / 9 * 5;
	printf("O resultado eh %d", celsius);
	
}
