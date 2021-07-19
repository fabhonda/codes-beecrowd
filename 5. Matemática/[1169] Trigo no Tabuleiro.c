#include <stdio.h>
#include <math.h>

int main(){
	
	int n,i,x;
	unsigned long long int valor;
	
	scanf("%i",&n);
	
	for(i=0;i<n;i++){
			scanf("%i",&x);
			if(x==64){
				valor = pow(2,x-1);
				valor /= 12;
				valor /= 1000;	
				printf("%llu kg\n",(valor*2)+1);				
			}
			else{
				valor = pow(2,x);
				valor /= 12;
				valor /= 1000;	
				printf("%llu kg\n",valor);
			}
	}

	return 0;
}
