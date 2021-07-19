#include <stdio.h>

int main(){
	
	int s, t, f, fuso;
	
	scanf("%i %i %i",&s,&t,&f);
		
	fuso = s+t+f;
		
	if(fuso>24){
		printf("%i\n",fuso-24);
	}
	else if(fuso<0){
		printf("%i\n",fuso+24);
	}
	if(fuso>0 && fuso<24){
		printf("%i\n",fuso);
	}
	if(fuso==24 || fuso==0){
		fuso=0;
		printf("%i\n",fuso);
	}

	return 0;
}
