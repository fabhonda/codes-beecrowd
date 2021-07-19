#include <stdio.h>

int main(){
	
	int n,a,b,i,j1,j2;
	
	scanf("%i",&n);
	while(n!=0){
		j1=0;
		j2=0;
		for(i=0;i<n;i++){
			scanf("%i %i",&a,&b);
			if(a>b){
				j1++;
			}
			if(b>a){
				j2++;
			}
		}
		printf("%i %i\n",j1,j2);
		scanf("%i",&n);
	}
	return 0;
}
