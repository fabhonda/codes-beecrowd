#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	
	string frase;
	char verifica;
	bool taut;
	
	while(getline(cin,frase)){
		if(frase[0]=='*'){
			break;
		}
		taut = true;
		//cin.ignore();
		transform(frase.begin(),frase.end(),frase.begin(),::tolower);
		verifica = frase[0];
		for(int i=0;i<frase.size();i++){
			if(frase[i]==' ' & frase[i+1] != verifica){
				taut = false;
				break;
			}
		}
		if(taut == true){
			cout << "Y" << endl;
		}
		else{
			cout << "N" << endl;
		}
	}
	
	
	return 0;
}
