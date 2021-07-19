#include <iostream>

using namespace std;

int main(){
	
	int numeros[5],cresc=0,decresc=0;
	
	for(int i=0;i<5;i++){
		cin >> numeros[i];
	}
	
	for(int i=0;i<4;i++){
		if(numeros[i] > numeros[i+1]){
			decresc++;
		}
		if(numeros[i] < numeros[i+1]){
			cresc++;
		}
	}
	
		
	if(decresc==4){
		cout << "D" << endl;
	}
	else if(cresc==4){
		cout << "C" << endl;
	}
	else{
		cout << "N" << endl;
	}
		
	
	return 0;
}
