#include <iostream>

using namespace std;

int main(){
	
	string movim;
	int turistas,restantes=0,jipes=0;
	
	while(movim != "ABEND"){	
		cin >> movim;
		if(movim == "ABEND"){
			break;
		}
		cin >> turistas;
		if(movim == "SALIDA"){
			restantes += turistas;
			jipes++;
		}
		else if(movim == "VUELTA"){
			restantes -= turistas;
			jipes--;
		}
	}
	
	cout << restantes << "\n" << jipes << endl;
	
	return 0;
}
