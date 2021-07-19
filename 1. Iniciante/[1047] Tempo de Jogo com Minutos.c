#include <iostream>

using namespace std;

int main(){
	
	int hi,m1,hf,mf,horas,minutos;
	
	cin >> h1 >> m1 >> hf >> mf;
	
	if(hf>=h1 & mf>=m1){
		horas = hf - h1;
		minutos = mf - m1;
		if(horas == 0 & minutos == 0){
			cout << "horas: " << 24 << endl << "minutos: " << 00;
		}
		else{
			cout << "horas: " << horas << endl << "minutos: " << minutos;
		}
	}
	
	
	return 0;
}
