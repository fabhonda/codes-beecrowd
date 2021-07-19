#include <iostream>

using namespace std;

int main(){
	
	int t;
	string sheldon, raj;
	cin >> t;
	for(int i=0;i<t;i++){
		cin >> sheldon >> raj;
		if(sheldon == raj){
			cout << "Caso #" << i+1 << ": De novo!" << endl;
		}
		else{
			if(sheldon == "tesoura"){
				if(raj == "papel" or raj == "lagarto"){
					cout << "Caso #" << i+1 << ": Bazinga!" << endl;
				}
				else{
					cout << "Caso #" << i+1 << ": Raj trapaceou!" << endl;
				}				
			}
			if(sheldon == "pedra"){
				if(raj == "lagarto" or raj == "tesoura"){
					cout << "Caso #" << i+1 << ": Bazinga!" << endl;
				}
				else{
					cout << "Caso #" << i+1 << ": Raj trapaceou!" << endl;
				}
			}
			if(sheldon == "papel"){
				if(raj == "pedra" or raj == "Spock"){
					cout << "Caso #" << i+1 << ": Bazinga!" << endl;
				}
				else{
					cout << "Caso #" << i+1 << ": Raj trapaceou!" << endl;
				}				
			}				
			if(sheldon == "Spock"){
				if(raj == "tesoura" or raj == "pedra"){
					cout << "Caso #" << i+1 << ": Bazinga!" << endl;
				}
				else{
					cout << "Caso #" << i+1 << ": Raj trapaceou!" << endl;
				}				
			}				
			if(sheldon == "lagarto"){
				if(raj == "papel" or raj == "Spock"){
					cout << "Caso #" << i+1 << ": Bazinga!" << endl;
					}
				else{
					cout << "Caso #" << i+1 << ": Raj trapaceou!" << endl;
					}				
			}				
		}
	}
	
	return 0;
}
	
