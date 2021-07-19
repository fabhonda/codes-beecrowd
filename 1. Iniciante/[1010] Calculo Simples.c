#include <stdio.h>

int main(){
	
	int cod_1, cod_2, pecas1, pecas2;
	float valor_1, valor_2, valor_total;
	
	scanf("%i %i %f",&cod_1,&pecas1,&valor_1);
	scanf("%i %i %f",&cod_2,&pecas2,&valor_2);
	
	valor_total = (valor_1*pecas1)+(valor_2*pecas2);
	
	printf("VALOR A PAGAR: R$ %.2f\n",valor_total);
	
	return 0;
}
