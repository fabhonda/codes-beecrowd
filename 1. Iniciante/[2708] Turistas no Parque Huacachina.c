#include <stdio.h>

int main(){
	
	int pessoas,jipes,total;
	char tipo[10];
	
	scanf("%s %i",&tipo,&pessoas);
	jipes++;
	total=pessoas;
	
	while(strcmp(tipo,"ABEND")!=0){
		scanf("%s %i",&tipo,&pessoas);
		printf("%s\n",tipo);
		if(strcmp(tipo,"SALIDA")==0){
			jipes++;
			total+=pessoas;
		}
		if(strcmp(tipo,"VUELTA")==0){
			jipes--;
			total-=pessoas;
		}
	}
	
	printf("%i\n%i\n",total,jipes);
	
	
	return 0;
}
