#include <stdio.h>

int main(){
	
	int n,fat=0,i=0;
	scanf("%i",&n);
	
	while(i<n){
		if(i==0){
			fat=n;
		}
		else{
		fat=fat*(n-i);
		}
		i++;
	}
	
	printf("%i\n",fat);
	
	return 0;
}
