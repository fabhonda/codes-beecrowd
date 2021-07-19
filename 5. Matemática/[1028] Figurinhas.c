#include <stdio.h>

int main(){
	
	int n, i, f1, f2, num, denom, resto;
	
	scanf("%i",&n);
	
	for(i=0;i<n;i++){
		scanf("%i %i",&f1,&f2);
		num = f1;
		denom = f2;
		resto = 1;
		while(resto>0){
			resto = num%denom;
			if(resto>0){
				num = denom;
				denom = resto;
			}
		}
		printf("%i\n",denom);
	}
	
	
	return 0;
}
