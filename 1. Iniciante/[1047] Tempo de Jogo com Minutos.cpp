#include <iostream>

using namespace std;

int main(){
	
	int hi,mi,hf,mf,horas,minutos;
	
	cin >> hi >> mi >> hf >> mf;
	
	if(hf>=hi & mf>=mi){
		horas = hf - hi;
		minutos = mf - mi;
		if(horas == 0 & minutos == 0){
			cout << "O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)" << endl;
		}
		else{
			cout << "O JOGO DUROU " << horas << " HORA(S) E " << minutos << " MINUTO(S)" << endl;
		}
	}
	
	if(hf>=hi & mf<mi){
		minutos = 60-(mi-mf);
		horas = (hf-hi)-1;
		if(horas==-1){
			horas = 23;
		}
		cout << "O JOGO DUROU " << horas << " HORA(S) E " << minutos << " MINUTO(S)" << endl;
	}
	
	if(hf<hi & mf>=mi){
		minutos = mf-mi;
		horas = 24-(hi-hf);
		cout << "O JOGO DUROU " << horas << " HORA(S) E " << minutos << " MINUTO(S)" << endl;
	}
	
	if(hf<hi & mf<mi){
		minutos = 60-(mi-mf);
		horas = 24-(hi-hf)-1;
		cout << "O JOGO DUROU " << horas << " HORA(S) E " << minutos << " MINUTO(S)" << endl;
	}
	
	
	return 0;
}
