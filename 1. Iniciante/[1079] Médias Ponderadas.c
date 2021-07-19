#include <stdio.h>

int main(){
	
	int n,i;
	
	scanf("%i",&n);
	
	float n1,n2,n3,media[n];
	
	for(i=0;i<n;i++){
		scanf("%f",&n1);
		scanf("%f",&n2);
		scanf("%f",&n3);
		
		media[i] = ((n1*2)+(n2*3)+(n3*5))/10;
	}
	
	for(i=0;i<n;i++){
		printf("%.1f\n",media[i]);
	}		
	
	return 0;
}
