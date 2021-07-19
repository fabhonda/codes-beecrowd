#include <stdio.h>

int main(){
	
	int n,i,t,min,pos;
	
	scanf("%i",&n);
	
	int vetor[n];
	
	for(i=0;i<n;i++){
		scanf("%i",&t);
		vetor[i] = t;
		if(i==0){
			min=t;
			pos=i+1;
		}
		if(t<min){
			min=t;
			pos=i+1;
		}
	}
	
	printf("%i\n",pos);
	
	
	
	
	
	
	return 0;
}
