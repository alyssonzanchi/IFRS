#include <stdio.h>
#include <stdlib.h>

int main() {
	int d, vm, t;
	printf("Informe a distancia do trajeto em Km: ");
	scanf("%d", &d);
	
	printf("Informe a velocidade media da viagem em Km/h: ");
	scanf("%d", &vm);
	
	t = d / vm;
	printf("Voce ira demorar %d horas para chegar ao seu destino", t);
	
}
