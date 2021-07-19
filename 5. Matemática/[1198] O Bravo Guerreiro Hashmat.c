#include <stdio.h>

int main(){
	
	long long int x, y, dif;
	
	while(scanf("%lli %lli",&x,&y)!=EOF){
		dif=y-x;
		if(dif>=0){
			printf("%lli\n",dif);
		}
		else{
			printf("%lli\n",dif*(-1));	
		}			
	}

	return 0;
}
