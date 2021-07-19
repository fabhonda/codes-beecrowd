#include <stdio.h>

int main(){
	
	int l,i,veloz;
	
	while(scanf("%i",&l)!=EOF){
		int velocidades[l];
		for(i=0;i<l;i++){
			scanf("%i",&velocidades[i]);
			if(i==0){
				veloz = velocidades[i];
			}
			else if(velocidades[i] > veloz){
				veloz = velocidades[i];
			}
		}
		if(veloz<10){
			printf("1\n");
		}
		if(veloz>=10 && veloz<20){
			printf("2\n");
		}
		if(veloz>=20){
			printf("3\n");	
		}
	}
	
	
	return 0;
}
