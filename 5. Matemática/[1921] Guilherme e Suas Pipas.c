#include <stdio.h>

int main(){
	
	int n;
	long long int arestas, valor;
	
	while(scanf("%i",&n)!=EOF){
		valor = n-1-2;
		arestas = (n*valor)/2;
		printf("%lli\n",arestas);		
	}
	
	return 0;
}
