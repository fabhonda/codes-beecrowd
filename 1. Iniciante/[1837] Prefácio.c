#include <stdio.h>

int main(){
	
	
	int a,b,q,r;
	
	
	scanf("%i %i",&a,&b);
	
	if(a<0 && b>0){
		q = (a/b) - 1;
		r = a- (q*b);
	}
	else{
		r = a%b;
		q = (a/b);
	}
	if(a<0 && b<0){
		q = (a/b) + 1;
		r = a- (q*b);	
	}

	
	printf("%i %i\n",q,r);
	
	return 0;
	
	}
	
	
	


