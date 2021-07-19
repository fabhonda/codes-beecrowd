#include <stdio.h>

int main(){
	
	int n, horas, minutos, segundos;
	
	scanf("%i",&n);

	horas = n/3600;
	minutos = (n%3600)/60;
	segundos = n-(horas*3600+minutos*60);
	
	printf("%i:%i:%i\n",horas,minutos,segundos);
	
	return 0;
}
