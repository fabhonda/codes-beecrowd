#include <stdio.h>

int main(){
	
	int n, i;
	float saq,bloq,atk,saq2,bloq2,atk2,total_saq,total_bloq,total_atk,acert_saq,acert_bloq,acert_atk,perc_saq,perc_bloq,perc_atk;
	char nome[100];
	
	scanf("%i",&n);
	
	for(i=0;i<n;i++){
		scanf("%s",&nome);
		scanf("%i %i %i",&saq,&bloq,&atk);
		scanf("%i %i %i",&saq2,&bloq2,&atk2);
		
		total_saq += saq;
		total_bloq += bloq;
		total_atk += atk;
		
		acert_saq += saq2;
		acert_bloq += bloq2;
		acert_atk += atk2;
	}
		perc_saq = (acert_saq/total_saq)*100;
		perc_bloq = (acert_bloq/total_bloq)*100;
		perc_atk = (acert_atk/total_atk)*100;
	
	printf("Pontos de Saque: %.2f %%.Pontos de Bloqueio: %.2f %%.Pontos de Ataque: %.2f %%.",perc_saq,perc_bloq,perc_atk);
	
	
	return 0;
}

