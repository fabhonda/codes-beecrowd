#include <stdio.h>

int main(){
	
	int n, i, j=1;
	
	scanf("%i",&n);
	
	for(i=0;i<n;i++){
		printf("%i %i %i PUM\n",j,j+1,j+2);
		j+=4;
	}
	
	return 0;
}
