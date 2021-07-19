#include <stdio.h>

int main(){
	
	int n,i,t,ano=2015;
	
	scanf("%i",&n);
	
	for(i=0;i<n;i++){
		scanf("%i",&t);
		if(t>=ano){
			printf("%i A.C.\n",t-ano+1);
		}
		else if(t<ano){
			printf("%i D.C.\n",ano-t);
		}
	}
	
	
	return 0;
}
