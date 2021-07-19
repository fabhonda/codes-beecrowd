#include <stdio.h>
#include <math.h>

int main(){
	
	int i,t,n,s;
	
	scanf("%i",&t);
	
	for(i=0;i<t;i++){
		scanf("%i",&n);
		s = (pow(2,n))-1;
		printf("%i\n",s);
	}
}
