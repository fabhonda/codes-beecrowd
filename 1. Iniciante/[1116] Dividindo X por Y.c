#include <stdio.h>

int main(){
	
	int n, i, x, y; 
	float divisao;
	
	scanf("%i",&n);
	
	for(i=0;i<n;i++){
		scanf("%i %i",&x,&y);
		if(x!=0 && y==0){
			printf("divisao impossivel\n");	
		}
		else{
			divisao = (float)(x)/(float)(y);
			printf("%.1f\n",divisao);
		}
	}
	
	return 0;
}
