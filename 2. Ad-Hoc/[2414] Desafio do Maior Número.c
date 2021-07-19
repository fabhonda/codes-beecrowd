#include <stdio.h>

int main(){
	
	int n,i,maior;
	
	scanf("%i",&n);
	i=1;
	
	while(n!=0){
		if(i==1){
			maior=n;
		}
		else{
			if(n>maior){
				maior=n;
			}
		}
		i=0;
		scanf("%i",&n);
	}
	
	printf("%i\n",maior);
	
	
	return 0;
}
