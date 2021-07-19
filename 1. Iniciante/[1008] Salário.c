#include <stdio.h>

int main(){
	
	int num, qtd_horas;
	float valor, salario;
	
	scanf("%i",&num);
	scanf("%i",&qtd_horas);
	scanf("%f", &valor);
	
	
	salario = (qtd_horas * valor);
	
	printf("NUMBER = %i\nSALARY = U$ %.2f\n",num,salario);
	
	return 0;
}
