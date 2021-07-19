#include <iostream>

using namespace std;

int main(){
	
	string mensagem;
	
	getline(cin,mensagem);
	
	for(int i=0;i<mensagem.size();i++){
		if(mensagem[i]=='p'){
			mensagem.erase(mensagem.begin()+i);
		}
	}
	
	for(int i=0;i<mensagem.size();i++){
		cout << mensagem[i];
	}
	
	cout << endl;
	
	
	
	return 0;
}
