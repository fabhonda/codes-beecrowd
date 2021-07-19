#include <stdio.h>

int main(){
	
	int t, n, i, j;
	
	scanf("%i",&t);
	
	for(i=0;i<t;i++){
		scanf("%i",&n);
		int idades[n];
		for(j=0;j<n;j++){
			scanf("%i",&idades[j]);
		}
		printf("Case %i: %i\n",i+1,idades[n/2]);
	}
	
	
	
	return 0;
}
