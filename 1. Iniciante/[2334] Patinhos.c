#include <stdio.h>

int main(){
	
	unsigned long long int patinhos;
	
	scanf("%llu",&patinhos);
	
	while(patinhos!=-1){
		if(patinhos==0){
			printf("%llu\n",patinhos);
		}
		else{
			printf("%llu\n",patinhos-1);
		}
		scanf("%llu",&patinhos);
	}
	return 0;
}
