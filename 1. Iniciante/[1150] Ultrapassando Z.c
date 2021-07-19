#include <stdio.h>

int main(){
	
	int i,x,z,soma=0,inteiros;
	
	scanf("%i",&x);
	scanf("%i",&z);
	
	while(z<=x){
		scanf("%i",&z);		
	}
	
	i=x;
	while(soma<=z){
		soma+=i;
		i++;
		inteiros++;
	}
	
	printf("%i\n",inteiros);
	
	
	
	
	return 0;
}
