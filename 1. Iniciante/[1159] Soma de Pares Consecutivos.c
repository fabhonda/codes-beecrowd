#include <stdio.h>

int main(){
	
	int x, i, j=0, s;
	
	scanf("%i",&x);
	
	while(x!=0){
		s=0;
		i=0;
		j=x;
		while(i<5){
			if(j%2==0){
				s+= j;
				i++;
			}
			j++;
		}
		printf("%i\n",s);
		scanf("%i",&x);
	}
	
	
	
	return 0;
}
