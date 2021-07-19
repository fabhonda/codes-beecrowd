#include <stdio.h>

int main(){
	
	int i,t;
	float melhor;
	
	while(scanf("%i",&t)!=EOF){
		float velocidades[t];
		for(i=0;i<t;i++){
			scanf("%f",&velocidades[i]);
			if(i==0){
				melhor = velocidades[i];
			}
			else if(velocidades[i] < melhor){
				melhor = velocidades[i];
			}
		}
		printf("%.2f\n",melhor);
	}
	
	return 0;
}
