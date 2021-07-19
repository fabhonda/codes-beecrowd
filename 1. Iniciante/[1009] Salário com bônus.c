#include <stdio.h>

int main(){
	
	
	char nome[50];
	double salario, valor_vendas, total, comissao;
	
	gets(nome);
	scanf("%lf",&salario);
	scanf("%lf",&valor_vendas);
	
	comissao = (15*valor_vendas)/100;
	
	total = comissao + salario;
	
	printf("TOTAL = R$ %.2lf\n",total);
	
	return 0;
}
