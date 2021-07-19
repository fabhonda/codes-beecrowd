#include <stdio.h>

int main(){
	
	int zor1[3],i,a,b,c;
	
	while(scanf("%i %i %i",&a,&b,&c)!=EOF){
		
		zor1[0]=a,zor1[1]=b,zor1[2]=c;
		
		if(zor1[0] == zor1[1] && zor1[0] == zor1[2]){
			printf("*\n");
		}
		if(zor1[0] == zor1[1] && zor1[0] != zor1[2]){
			printf("C\n");
		}	
		if(zor1[0] != zor1[1] && zor1[0] == zor1[2]){
			printf("B\n");
		}
		if(zor1[0] != zor1[1] && zor1[0] != zor1[2]){
			printf("A\n");
		}			
	}
	

	return 0;
}
