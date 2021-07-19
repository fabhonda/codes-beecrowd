#include <stdio.h>

int main(){
	
	int t,n,i,consumo,minimo=110,maximo=130;
	char alimento[20];
	
	scanf("%i",&t);
	while(t!=0){
		consumo=0;
		for(i=0;i<t;i++){
			//scanf("%i %s",&n,&alimento);
				scanf("%i",&n);
				gets(alimento);
				fflush(stdin);
			fflush(stdin);
			if((strcmp(alimento," suco de laranja"))==0){
				consumo += n*120;
			}
			if((strcmp(alimento," morango fresco"))==0){
				consumo += n*85;
			}
			if((strcmp(alimento," mamao"))==0){
				consumo += n*85;
			}
			if((strcmp(alimento," goiaba vermelha"))==0){
				consumo += n*70;
			}
			if((strcmp(alimento," manga"))==0){
				consumo += n*56;
			}
			if((strcmp(alimento," laranja"))==0){
				consumo += n*50;
			}
			if((strcmp(alimento," brocolis"))==0){
				consumo += n*34;
			}
		}
		if(consumo>maximo){
			printf("Menos %i mg\n",consumo-maximo);	
		}
		else if(consumo<minimo){
			printf("Mais %i mg\n",minimo-consumo);
		}
		else if(consumo>= minimo && consumo<=maximo){
			printf("%i mg\n",consumo);
		}
		scanf("%i",&t);
	}
	
	
	return 0;
}
