#include <stdio.h>
#include <string.h>

int main(){
	
	int n, i, quantia=0, coelhos=0, ratos=0, sapos=0, total=0;
	float perc_coelhos, perc_ratos, perc_sapos;
	char tipo[2];
	
	scanf("%i",&n);
	
	for(i=0;i<n;i++){
		scanf("%i %s",&quantia,&tipo);
		total+=quantia;
		if(strcmp(tipo,"C")==0){
			coelhos += quantia;
		}
		if(strcmp(tipo,"R")==0){
			ratos += quantia;
		}
		if(strcmp(tipo,"S")==0){
			sapos += quantia;
		}		
	}
	
	perc_coelhos = (float)(coelhos*100)/total;
	perc_ratos = (float)(ratos*100)/total;
	perc_sapos = (float)(sapos*100)/total;
	
	printf("Total: %i cobaias\nTotal de coelhos: %i\nTotal de ratos: %i\nTotal de sapos: %i\nPercentual de coelhos: %.2f %%\nPercentual de ratos: %.2f %%\nPercentual de sapos: %.2f %%\n",total,coelhos,ratos,sapos,perc_coelhos,perc_ratos,perc_sapos);
	
	
	return 0;
}
