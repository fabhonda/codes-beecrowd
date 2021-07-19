#include <stdio.h>

int main(){
	
	int v, n[10], i;
	
	scanf("%i",&v);
	
	for(i=0;i<10;i++){
		if(i==0){
			n[i] = v;
		}
		else{
			n[i] = n[i-1]*2;
		}
	}
	
	for(i=0;i<10;i++){
		printf("N[%i] = %i\n",i,n[i]);
	}
	
	return 0;
}
