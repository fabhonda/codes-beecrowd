#include <stdio.h>

int main(){
	
	double n, notas[12];
	int i;
	
	scanf("%",&n);
	
	for(i=0;i<12;i++){
		switch(i){
			case 0:
				notas[i] = n/100;
				n = (int)n % 100;
				break;
			case 1:
				notas[i] = n/50;
				n = (int)n % 50;
				break;				
			case 2:
				notas[i] = n/20;
				n = (int)n % 20;
				break;
			case 3:
				notas[i] = n/10;
				n = (int)n % 10;
				break;
			case 4:
				notas[i] = n/5;
				n = (int)n % 5;
				break;
			case 5:
				notas[i] = n/2;
				n = (int)n % 2;
				break;
			case 6:
				notas[i] = n/1;
				n = (int)n % 1;
				break;
			case 7:
				notas[i] = n/0.5;
				n = n % 0.5;
				break;
			case 8:
				notas[i] = n/0.25;
				n = n % 0.25;
				break;
			case 9:
				notas[i] = n/0.10;
				n = n % 0.10;
				break;
			case 10:
				notas[i] = n/0.05;
				n = n % 0.05;
				break;
			case 10:
				notas[i] = n/0.01;
				n = (int)n % 0.01;
				break;
		}
	}
	
	for(i=0;i<12;i++){
		printf("%i\n",(int)notas[i]);
	}
	
	
	
	return 0;
}
