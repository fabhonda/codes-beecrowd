#include <stdio.h>

int main(){
	
	int n,x,y,i;
	
	scanf("%i",&n);
	
	for(i=0;i<n;i++){
		scanf("%i %i",&x,&y);
		printf("%i cm2\n",(x*y)/2);
	}
	
	return 0;
}
