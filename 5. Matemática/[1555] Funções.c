#include <stdio.h>
#include <math.h>

int main(){
	
	int n, i, x, y, rafael, beto, carlos;
	
	scanf("%i",&n);
	
	for(i=0;i<n;i++){
		scanf("%i %i",&x,&y);
		
		rafael = (pow(3*x,2)) + (pow(y,2));                    
		beto = (2*(pow(x,2))) + (pow(5*y,2));                     
		carlos = (100*x*(-1)) + (pow(y,3));
		           
		if(rafael > beto && rafael > carlos){
			printf("Rafael ganhou\n");
		}
		if(beto > rafael && beto > carlos){
			printf("Beto ganhou\n");
		}
		if(carlos > rafael && carlos > beto){
			printf("Carlos ganhou\n");
		}
	}
	
	return 0;
}
