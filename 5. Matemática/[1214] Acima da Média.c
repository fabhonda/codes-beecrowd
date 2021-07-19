#include <stdio.h>

int main(){
	
	int i,j,aprovados,n,c;
	float soma,media;
	
	scanf("%i",&c);
	
	for(i=0;i<c;i++){
		scanf("%i",&n);
		aprovados = 0;
		soma = 0;
		media = 0;
		int medias[n];
		for(j=0;j<n;j++){
			scanf("%i",&medias[j]);
			soma+=medias[j];
		}
		media = (float)soma/(float)n;
		for(j=0;j<n;j++){
			if(medias[j]>media){
				aprovados++;
			}
		}		
		printf("%.3f%%\n",((float)aprovados/(float)n)*100);
	}
	
	return 0;
}
