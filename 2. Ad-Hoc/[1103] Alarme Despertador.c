#include <stdio.h>

int main(){
	
	int h1,m1,h2,m2,horas,minutos;
	
	scanf("%i %i %i %i",&h1,&m1,&h2,&m2);
	
	while(h1!=0 || h2!=0 || m1!=0 || m2!=0){
		if(h2>h1){
			if(m2>m1){
				horas = h2-h1;
				minutos = m2-m1;
				minutos+= (horas*60);
			}	
			if(m1>m2){
				horas = h2-h1-1;
				minutos = (60-m1)+m2;
				minutos+= (horas*60);
			}	
			if(m1==m2){
				horas = h2-h1;
				minutos = 0;
				minutos+= (horas*60);			
			}
		}

		if(h1>h2){
			if(m2>m1){
				horas = (24-h1)+h2;
				minutos = m2-m1;
				minutos+= (horas*60);
			}
			if(m1>m2){
				horas = (24-h1)+h2;
				minutos = (60-m1)+m2;
				minutos+= (horas*60);
			}
			if(m1==m2){
				horas = (24-h1)+h2;
				minutos = 0;
				minutos+= (horas*60);		
			}
		}
		if(h1==h2){
			if(m2>m1){
				horas = 0;
				minutos = m2-m1;
				minutos+= (horas*60);
			}
			if(m1>m2){
				horas = 0;
				minutos = (60-m1)+m2;
				minutos+= (horas*60);
			}
			if(m1==m2){
				horas = 0;
				minutos = 0;
				minutos+= (horas*60);		
			}
		}
	printf("%i\n",minutos);
	scanf("%i %i %i %i",&h1,&m1,&h2,&m2);
	}
	
	return 0;
}
