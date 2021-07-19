#include <stdio.h>

int main(){
	
	int l,r;
	
	scanf("%i %i",&l,&r);
	while(l!=0 || r!=0){
		printf("%i\n",l+r);
		scanf("%i %i",&l,&r);
	}
	
	return 0;
}
