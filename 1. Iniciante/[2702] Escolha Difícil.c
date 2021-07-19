#include <stdio.h>

int main(){
	
	int c,b,p, pc,pb,pp, total=0;
	
	scanf("%i %i %i",&c,&b,&p);
	scanf("%i %i %i",&pc,&pb,&pp);
	
	
	if(pc > c){
		total += pc-c;
	}
	if(pb > b){
		total += pb-b;
	}
	if(pp > p){
		total += pp-p;
	}
	
	printf("%i\n",total);
	
	return 0;
}
