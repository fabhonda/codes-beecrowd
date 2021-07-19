#include <stdio.h>

int main(){
	
	int n, x, i, j, primo=0;
	
	scanf("%i",&n);
	
	for(i=0;i<n;i++){
		scanf("%i",&x);
		primo = 0;
		for(j=1;j<=x;j++){
			if(x%j==0){
				primo++;
			}
		}
		if(primo==2){
			printf("%i eh primo\n",x);
		}
		else{
			printf("%i nao eh primo\n",x);
		}
	}
	
	
	return 0;
}
