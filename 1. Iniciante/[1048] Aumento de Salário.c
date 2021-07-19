#include <stdio.h>

int main(){
	
	float salario, novo, reajuste;
	
	scanf("%f",&salario);
	if(salario >= 0 && salario <= 400){
		reajuste = (salario*15)/100;
		novo = salario + reajuste;
		printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %%\n",novo,reajuste);
	}
	if(salario > 400 && salario <= 800){
		reajuste = (salario*12)/100;
		novo = salario + reajuste;
		printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %%\n",novo,reajuste);
	}	
	if(salario > 800 && salario <= 1200){
		reajuste = (salario*10)/100;
		novo = salario + reajuste;
		printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %%\n",novo,reajuste);
	}		
	if(salario > 1200 && salario <= 2000){
		reajuste = (salario*7)/100;
		novo = salario + reajuste;
		printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %%\n",novo,reajuste);		
	}
	if(salario > 2000){
		reajuste = (salario*4)/100;
		novo = salario + reajuste;
		printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %%\n",novo,reajuste);		
	}
	return 0;
}
