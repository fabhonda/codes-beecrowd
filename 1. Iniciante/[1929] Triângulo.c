#include <stdio.h>

int main(){
	
	int a, b, c, d;
	
	scanf("%i %i %i %i",&a,&b,&c,&d);
	
	if(a == b+c || a == b+d || a== c+d || b == a+c || b == a+d || b == c+d || c == a+b || c == a+d || c== b+d || d == a+b || d== a+c || d== b+c){
		printf("S\n");
	}
	else{
		printf("N\n");
	}
	
	
	
	return 0;
}
