#include <stdio.h>

int main(){
	
	int n;
	
	scanf("%i",&n);
	
	if(n==1 || n==3 || n==5 || n==10 || n==25 || n==50 || n==100){
		printf("Top %i\n",n);
	}
	
	if(n==2){
		printf("Top 3\n");	
	}
	if(n==4){
		printf("Top 5\n");
	}
	if(n>=6 && n<10){
		printf("Top 10\n");
	}
	if(n>10 && n<25){
		printf("Top 25\n");
	}
	if(n>25 && n<50){
		printf("Top 50\n");
	}
	if(n>50 && n<100){
		printf("Top 100\n");
	}
	
	return 0;
}
