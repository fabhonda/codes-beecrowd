#include <stdio.h>

int main(){
	
	int t,a,b,c,d,e,acertos=0;
	
	scanf("%i",&t);
	scanf("%i %i %i %i %i",&a,&b,&c,&d,&e);
	
	if(a==t){
		acertos++;
	}
	if(b==t){
		acertos++;
	}
	if(c==t){
		acertos++;
	}
	if(d==t){
		acertos++;
	}
	if(e==t){
		acertos++;
	}
	
	printf("%i\n",acertos);
	
	
	
	
	return 0;
}
