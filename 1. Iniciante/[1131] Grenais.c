#include <stdio.h>

int main(){
	
	int gols_inter, gols_gremio, inter=0, gremio=0, empate=0, x, grenais=0;
	
	do{
		scanf("%i %i",&gols_inter,&gols_gremio);
		if(gols_inter > gols_gremio){
			inter++;	
		}
		if(gols_gremio > gols_inter){
			gremio++;
		}
		if(gols_inter == gols_gremio){
			empate++;
		}
		grenais++;
		printf("Novo grenal (1-sim 2-nao)\n");
		scanf("%i",&x);
	}while(x==1);
	
	if(inter > gremio){
		printf("%i grenais\nInter:%i\nGremio:%i\nEmpates:%i\nInter venceu mais\n",grenais,inter,gremio,empate);
	}
	if(gremio > inter){
		printf("%i grenais\nInter:%i\nGremio:%i\nEmpates:%i\nGremio venceu mais\n",grenais,inter,gremio,empate);
	}
	if(gremio == inter){
		printf("%i grenais\nInter:%i\nGremio:%i\nEmpates:%i\nNao houve vencedor\n",grenais,inter,gremio,empate);
	}
	
	return 0;
}
