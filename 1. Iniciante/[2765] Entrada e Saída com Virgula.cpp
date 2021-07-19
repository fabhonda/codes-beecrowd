#include <iostream>

using namespace std;

int main(){
	
	int i=0,tam,j;
	
	string frase;
	getline(cin,frase);
	
	while(frase[i] != ','){
		cout << frase[i];
		i++;
	}
	
	cout << endl;
	
	for(j=i+1;j<frase.size();j++){
		cout << frase[j];
	}
	
	cout << endl;
	
	return 0;
}
