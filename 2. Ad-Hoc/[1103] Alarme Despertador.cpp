#include <iostream>

using namespace std;

int main(){
	
	int hi,mi,hf,mf,horas,minutos;
	
	cin >> hi >> mi >> hf >> mf;
	
	while(hi!=0 | mi!=0 | hf!=0 | mf!=0){
	
	if(hf>=hi & mf>=mi){
		horas = hf - hi;
		minutos = mf - mi +(horas*60);
		cout << minutos << endl;
	}
	
	if(hf>=hi & mf<mi){
		horas = (hf-hi)-1;
		if(horas==-1){
			horas = 23;
		}
		minutos = 60-(mi-mf) +(horas*60);
		cout << minutos << endl;
	}
	
	if(hf<hi & mf>=mi){
		horas = 24-(hi-hf);
		minutos = mf-mi + (horas*60);
		
		cout << minutos << endl;
	}
	
	if(hf<hi & mf<mi){
		horas = 24-(hi-hf)-1;
		minutos = 60-(mi-mf) + (horas*60);
		cout << minutos << endl;
	}
	
	cin >> hi >> mi >> hf >> mf;
	
	}
	
	return 0;
}
