#include <stdio.h>

int main(){
	
	int n,j,i;
	float gd, n1,n2,n3,n4,n5,n6,n7,maior,menor;
	
	scanf("%i",&n);
	float media[n];
	char competidora[n];
	
	for(i=0;i<n;i++){
		scanf("%s",&competidora[i]);
		scanf("%f",&gd);
		scanf("%f %f %f %f %f %f %f",&n1,&n2,&n3,&n4,&n5,&n6,&n7);
		for(j=0;j<7;j++){
			if(j==0){
				menor=j;
				maior=j;
			}
			if(j<menor){
				menor=j;
			}
			if(j>maior){
				maior=j;
			}
		}
		//media[i] = ((n1+n2+n3+n4+n5+n6+n7)-maior-menor)*gd;
		printf("%.2f %.2f %.2f %.2f %.2f %.2f %.2f\n",n1,n2,n3,n4,n5,n6,n7);
		printf("%.2f %.2f\n", maior, menor);
	}
	
	for(i=0;i<n;i++){
		printf("%s %.2f\n",competidora[i],media[i]);
	}
	
	
	return 0;
}
