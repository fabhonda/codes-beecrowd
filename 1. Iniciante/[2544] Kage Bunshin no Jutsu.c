#include <stdio.h>

int main(){
	
	int n, valor, p;
	
	while(scanf("%i",&n)!=EOF){
		p=0;
		valor=1;
		while(valor!=n){
			if(n==1){
				break;
			}
			else{
				valor*=2;
				p++;
			}
		}
		printf("%i\n",p);	
		
	}
	
	return 0;
}
