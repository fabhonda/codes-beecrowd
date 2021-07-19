#include <stdio.h>

int main(){
	
	double guys[3], min=0;
	int ind,rep=0,i;
	
	for(i=0;i<3;i++){
		scanf("%lf",&guys[i]);
		if(i==0){
			min = guys[0];
			ind = 0;
		}
		if(guys[i]<min){
			min = guys[i];
			ind = i;
		}
	}

	for(i=0;i<3;i++){
		if(min==guys[i]){
			rep++;
		}
	}
	
	if(rep>1){
		printf("Empate\n");
	}
	else{
		if(ind == 0){
			printf("Otavio\n");
		}
		if(ind == 1){
			printf("Bruno\n");
		}
		if(ind == 2){
			printf("Ian\n");
		}
	}
	
	
	return 0;
}
