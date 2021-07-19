#include <stdio.h>

int main(){
	
	int n,i,l,c,quebrados=0;
	
	scanf("%i",&n);
	
	for(i=0;i<n;i++){
		scanf("%i %i",&l,&c);
		if(l>c){
			quebrados+=c;
		}
	}
	
	printf("%i\n",quebrados);
	
	return 0;
}
