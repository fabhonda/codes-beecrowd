#include <iostream>

using namespace std;

int main(){
	
	int t;
	string sheldon, raj;
	cin >> t;
	for(int i=0;i<t;i++){
		cin >> sheldon >> raj;
		if(sheldon == raj){
			cout << "empate" << endl;
		}
		else{
			if(sheldon == "tesoura"){
				if(raj == "papel" or raj == "lagarto"){
					cout << "rajesh" << endl;
				}
				else{
					cout << "sheldon" << endl;
				}				
			}
			if(sheldon == "pedra"){
				if(raj == "lagarto" or raj == "tesoura"){
					cout << "rajesh" << endl;
				}
				else{
					cout << "sheldon" << endl;
				}
			}
			if(sheldon == "papel"){
				if(raj == "pedra" or raj == "Spock"){
					cout << "rajesh" << endl;
				}
				else{
					cout << "sheldon" << endl;
				}				
			}				
			if(sheldon == "spock"){
				if(raj == "tesoura" or raj == "pedra"){
					cout << "rajesh" << endl;
				}
				else{
					cout << "sheldon" << endl;
				}				
			}				
			if(sheldon == "lagarto"){
				if(raj == "papel" or raj == "spock"){
					cout << "rajesh" << endl;
					}
				else{
					cout << "sheldon" << endl;
					}				
			}				
		}
	}
	
	return 0;
}
	
