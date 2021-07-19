#include <iostream>

using namespace std;

int main(){
	
	string bacteria, codigo;
	
	while(cin >> bacteria){
		cin >> codigo;
		size_t possui = bacteria.find(codigo);
		if(possui != string::npos){
			cout << "Resistente" << endl;
		}
		else{
			cout << "Nao resistente" << endl;
		}	
	}
	
	return 0;
}
