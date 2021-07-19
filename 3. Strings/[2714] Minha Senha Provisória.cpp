#include <iostream>

using namespace std;

int main(){
	
	int n;
	string codigo;
	bool zero;
	
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> codigo;
		zero = false;
		if(codigo.size()!=20){
			cout << "INVALID DATA" << endl;
		}
		else{
			if(codigo[0]!='R' | codigo[1]!='A'){
				cout << "INVALID DATA" << endl;
			}
			else{
				for(int j=2;j<codigo.size();j++){
					if(codigo[j]!='0' & zero==false){
						cout << codigo[j];
						zero = true;
					}
					else if(zero==true){
						cout << codigo[j];
					}
				}
				cout << endl;
			}
		}
	}
	
	
	return 0;
}
