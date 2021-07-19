#include <stdio.h>

int main(){
	
	int codigo, qtd;
	float total;
	
	scanf("%i %i",&codigo,&qtd);
	
	switch(codigo){
		case 1:
			total = qtd*4;
			printf("Total: R$ %.2f\n",total);
			break;
		case 2:
			total = qtd*4.5;
			printf("Total: R$ %.2f\n",total);
			break;
		case 3:
			total = qtd*5;
			printf("Total: R$ %.2f\n",total);
			break;
		case 4:
			total = qtd*2;
			printf("Total: R$ %.2f\n",total);
			break;
		case 5:
			total = qtd*1.5;
			printf("Total: R$ %.2f\n",total);
			break;
	}
	
	return 0;
}
