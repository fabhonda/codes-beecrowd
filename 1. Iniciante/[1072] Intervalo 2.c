#include <stdio.h>

int main(){
	
	int n, x, in=0, out=0, i;
	
	scanf("%i",&n);
	
	for(i=0;i<n;i++){
		scanf("%i",&x);
		if(x>=10 && x<=20){
			in++;
		}
		else{
			out++;
		}
	}
	
	printf("%i in\n%i out\n",in,out);
	
	return 0;
}
