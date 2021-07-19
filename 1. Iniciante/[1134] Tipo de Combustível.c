#include <stdio.h>

int main(){
	
	int valor, alcool=0, diesel=0, gasolina=0;
	
	scanf("%i",&valor);
	
	if(valor<1 || valor > 4){
		while(valor!=4){
			switch(valor){
				case 1:
					alcool++;
					break;
				case 2:
					gasolina++;
					break;
				case 3:
					diesel++;
					break;
			}
			scanf("%i",&valor);
		}
	}
	
	
	printf("MUITO OBRIGADO\nAlcool: %i\nGasolina: %i\nDiesel: %i\n",alcool,gasolina,diesel);
	
	
	return 0;
}
