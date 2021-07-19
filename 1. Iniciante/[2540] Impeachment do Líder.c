#include <stdio.h>

int main(){
	
	int n,v,total,impeachment,i;
	
	while(scanf("%i",&n)!=EOF){
		
		for(i=0;i<n;i++){
			scanf("%i",v);
			if(v==1){
				impeachment++;
				total++;
			}
			else{
				total++;
			}
		}
		if(total>=((2*impeachment)/3)){
			printf("impeachment\n");
		}
		else{
			printf("acusacao arquivada\n");
		}
	}
	
	
	
	
	
	return 0;
}
