#include <stdio.h>

int main(){
	
	int n,m,i,m_maior;
	double nota, nota_maior;
	
	scanf("%i",&n);
	
	for(i=0;i<n;i++){
		scanf("%i %lf",&m,&nota);
		if(i==0){
			m_maior = m;
			nota_maior = nota;
		}
		if(nota > nota_maior){
			m_maior = m;
			nota_maior = nota;
			
		}
	}
	
	if(nota_maior < 8){
		printf("Minimum note not reached\n");
	}
	else{
		printf("%i\n",m_maior);
	}
	
	
	
	return 0;
}
