#include <stdio.h>

int main(){
	
	int n, i, j, s=0, x;
	
	scanf("%i",&n);
	
	for(i=0;i<n;i++){
		scanf("%i",&x);
		s=0;
		for(j=1;j<x;j++){
			if(x%j==0){
				s+=j;
			}
		}
		if(s==x){
			printf("%i eh perfeito\n",x);
		}
		else{
			printf("%i nao eh perfeito\n",x);
		}
	}
	
	
	
	return 0;
}
