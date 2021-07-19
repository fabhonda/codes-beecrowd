#include <stdio.h>

int main(){
	
	int pa,pb,i,t,anos;
	double g1,g2;
	
	scanf("%i",&t);
	
	for(i=0;i<t;i++){
		scanf("%i %i %lf %lf",&pa,&pb,&g1,&g2);
		anos=0;
		
		pa+=(g1/100);  
		pb+=(g2/100);
		
		while(pa<pb){
			pa+=(int)(g1/100);
			pb+=(int)(g2/100);
			anos++;
		}
	
		printf("%i\n",pa);
		printf("%i\n",pb);
		if(anos>100){
			printf("Mais de 1 seculo.\n");
		} 
		else{
			printf("%i anos.\n",anos);
		}
		
	}
	
	
	
	return 0;
}
