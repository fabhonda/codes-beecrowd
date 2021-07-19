#include <stdio.h>

int main(){
	
	int i, t, n[1000], cont=0;
	
	scanf("%i",&t);
	
	for(i=0;i<1000;i++){
		if(cont==t-1){
			n[i] = cont;
			cont=0;
		}
		else{
			n[i] = cont;
			cont++;
		}
	}
	
	for(i=0;i<1000;i++){
		printf("N[%i] = %i\n",i,n[i]);
	}	
	
	return 0;
}
