#include<stdio.h>
#include<string.h>

struct Produto{
	char nome[50];
	double valor;
};

int main(){
	
	char name[50];
	int n, m, p, qtd; //leio do usuario
	int i, j, k; //contadores
	double value, total;
	
	scanf("%d",&n);
		
	for(i=0;i<n;i++){
		scanf("%d",&m);
		total = 0;
		struct Produto produtos[m];
		
		for(j=0;j<m;j++){
			scanf("%s",&name);
			scanf("%lf", &value);
			strcpy(produtos[j].nome,name);
			produtos[j].valor = value;
		}
		
		scanf("%d",&p);
		
		for(j=0;j<p;j++){
			scanf("%s",&name);
			scanf("%d",&qtd);
			for(k=0;k<m;k++){
				if(strcmp(name,produtos[k].nome)==0){
					total += (qtd*produtos[k].valor);
				}
			}
		}
		printf("R$ %.2lf\n",total);	
	}
	return 0;
}
