#include <stdio.h>

int main(){
	
	int tempo, vel_media;
	float distancia, litros;
	
	scanf("%i",&tempo);
	scanf("%i",&vel_media);
	
	distancia = vel_media*tempo;
	litros = distancia/12;
	
	printf("%.3f\n",litros);
	
	return 0;
}
