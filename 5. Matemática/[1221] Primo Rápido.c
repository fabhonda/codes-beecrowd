#include <stdio.h>

int main(){
	
	int n,i,j,primo=0;
	int x;
	
	scanf("%i",&n);
	
	for(i=0;i<n;i++){
		scanf("%i",&x);
		primo=0;
		for(j=1;j<x;j++){
			if(x%j==0){
				primo++;
				//printf("%i\n",j);
			}
		}
		if(primo==1){
			printf("Prime\n");
		}
		else{
			printf("Not Prime\n");
		}
	}
	
	
	return 0;
}
