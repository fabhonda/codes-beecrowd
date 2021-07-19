#include <stdio.h>

int main(){
	
	int n, i, cont=0, j=1, k=1;
	
	scanf("%i",&n);
	
	for(i=1;i<n*2;i++){
		if(cont==1){
			printf("%i %i %i\n",i,j+1,k+1);
			cont=-1;
		}
		else{
			printf("%i %i %i\n",i*i,j*j,k*k*k);
		}
		cont++;
	}
	
	return 0;
}
