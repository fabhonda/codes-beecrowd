#include <stdio.h>

int main(){
	
	int n, i, dias;
	float c, suprim;
	
	scanf("%i",&n);
	
	for(i=0;i<n;i++){
		scanf("%f",&c);
		suprim = c;
		dias=0;
		while(suprim>1){
			suprim /= 2;
			dias++;
		}
		printf("%i dias\n",dias);
	}
	
	
	
	return 0;
}
