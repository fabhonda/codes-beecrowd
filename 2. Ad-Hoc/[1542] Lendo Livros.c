#include <stdio.h>

int main(){
	
	int n1,n2,dias,x;
	
	scanf("%i",&n1);
	
	while(n1!=0){
		scanf("%i",&dias);
		scanf("%i",&n2);
		x = (n1*n2*dias)/(n2-n1);
		if(x==1){
			printf("%i pagina\n",x);
		}
		else{
			printf("%i paginas\n",x);			
			
		}
		scanf("%i",&n1);
	}
	return 0;	
	

}
