#include <stdio.h>
#include <stdlib.h>

int main() {
	int vi, ns, nnp, np, pt, rte, vna, ds;
	printf("Informe o valor do ingresso: ");
	scanf("%d", &vi);
	
	printf("Informe o numero de socios: ");
	scanf("%d", &ns);
	
	printf("Informe o numero de pessoas nao pagantes: ");
	scanf("%d", &nnp);
	
	printf("Informe o numero de pessoas pagantes: ");
	scanf("%d", &np);
	
	pt = ns + nnp + np;
	ds = (ns * vi) * 0.3;
	rte = (ns * vi) - ds + (np * vi);
	vna = (nnp * vi) + ds;
	printf("O publico total do evento eh %d \nA renda total do evento eh %d \nO valor nao arrecadado eh %d", pt, rte, vna);

}
