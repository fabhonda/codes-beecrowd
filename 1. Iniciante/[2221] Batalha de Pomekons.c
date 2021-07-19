#include <stdio.h>

int main(){
	
	int t,b,a,d,l,vg1,vg2,i;
	
	scanf("%i",&t);
	
	for(i=0;i<t;i++){
		scanf("%i",&b);
		scanf("%i %i %i",&a,&d,&l);
		if(l%2==0){
			vg1 = ((a+d)/2)+b;
		}
		else{
			vg1 = (a+d)/2;
		}
		scanf("%i %i %i",&a,&d,&l);
		if(l%2==0){
			vg2 = ((a+d)/2)+b;
		}
		else{
			vg2 = (a+d)/2;
		}
		if(vg1>vg2){
			printf("Dabriel\n");
		}
		if(vg2>vg1){
			printf("Guarte\n");
		}
		if(vg1==vg2){
			printf("Empate\n");
		}
	}
	
	
	
	return 0;
}
