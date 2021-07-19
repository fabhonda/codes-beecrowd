#include <stdio.h>

int main(){
	
	float n1,n2,n3,n4,media,exame, mediafinal;
	
	scanf("%f %f %f %f",&n1,&n2,&n3,&n4);
	
	media = ((n1*2)+(n2*3)+(n3*4)+(n4*1))/10;
	
	if(media >= 7.0){
		printf("Media: %.1f\nAluno aprovado.\n",media);
	}
	else if(media < 5.0){
		printf("Media: %.1f\nAluno reprovado.\n",media);
	}
	else if(media >= 5.0 && media < 7.0){
		printf("Media: %.1f\nAluno em exame.\n",media);
		scanf("%f",&exame);
		mediafinal = (exame+media)/2;
		printf("Nota do exame: %.1f\n",exame);
		if(mediafinal >= 5.0){
			printf("Aluno aprovado.\nMedia final: %.1f\n",mediafinal);
		}
		else if(mediafinal < 5.0){
			printf("Aluno aprovado.\nMedia final: %.1f\n",mediafinal);
		}
	}

	return 0;
}
