#include <stdio.h>

int main(){
	
	int n,m,g,qtd,jog=0,i,j;
	
	scanf("%i %i",&n,&m);
	
	for(i=0;i<n;i++){
		qtd=0;
		for(j=0;j<m;j++){
			scanf("%i",&g);
			if(g>0){
				qtd++;
			}
		}
		if(qtd==m){
			jog++;
		}
	}
	printf("%i\n",jog);
	
	
	return 0;
}
