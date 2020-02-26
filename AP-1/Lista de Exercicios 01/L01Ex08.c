#include <stdio.h>
#include <stdlib.h>

int main() {
	int ne, vv, vb, vn, pvv, pvb, pvn;
	printf("Informe o numero total de eleitores: ");
	scanf("%d", &ne);
	
	printf("Informe o numero de votos validos: ");
	scanf("%d", &vv);
	
	printf("Informe o numero de votos brancos: ");
	scanf("%d", &vb);
	
	printf("Informe o numero de votos nulos: ");
	scanf("%d", &vn);
	
	pvv = ne * vv / 100;
	pvb = vv / vb;
	pvn = vv / vn;
	printf("O percentual de votos validos eh %d \nO percentual de votos brancos eh %d \nO percentual de votos nulos eh %d", pvv, pvb, pvn);
	
}
