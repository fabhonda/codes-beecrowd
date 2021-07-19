#include <stdio.h>

int main(){
	
	int s, v, t;
	
	while(scanf("%i %i",&v,&t)!=EOF){
		s = (v*t)*2;
		printf("%i\n",s);
	}
	
	
	return 0;
}
