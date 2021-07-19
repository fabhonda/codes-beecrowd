#include <iostream>

using namespace std;

int main(){
	
	int n;
	string leds;
	int qtd;
	
	cin >> n;
	for(int i=0;i<n;i++){
		qtd = 0;
		cin >> leds;
		for(int j=0;j<leds.size();j++){
			switch(leds[j]){
				case '1':
					qtd+=2;
					break;
				case '2':
					qtd+=5;
					break;
				case '3':
					qtd+=5;
					break;
				case '4':
					qtd+=4;
					break;
				case '5':
					qtd+=5;
					break;
				case '6':
					qtd+=6;
					break;
				case '7':
					qtd+=3;
					break;
				case '8':
					qtd+=7;
					break;
				case '9':
					qtd+=6;
					break;
				case '0':
					qtd+=6;
					break;
			}
		}
		cout << qtd << " leds" << endl;
	}
	
	return 0;
}
