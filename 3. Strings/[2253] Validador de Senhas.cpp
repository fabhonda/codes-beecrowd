#include <iostream>
#include <cctype>

using namespace std;

int main(){
	
	int min,mai,num;
	string password;
	bool sorry;
	
	while(getline(cin,password)){
		min=0,mai=0,num=0;
		sorry=false;
		if(password.size()<6 | password.size()>32){
			cout << "Senha invalida." << endl;
		}
		else{
			for(int i=0;i<password.size();i++){
				if(isspace(password[i]) | ispunct(password[i])){
					sorry = true;
				}
				if(isdigit(password[i])){
					num++;
				}
				if(islower(password[i])){
					min++;
				}
				if(isupper(password[i])){
					mai++;
				}
			}
			if(sorry==true){
				cout << "Senha invalida." << endl;
			}
			else{
				if(num>0 & min>0 & mai>0){
					cout << "Senha valida." << endl;
				}
				else{
					cout << "Senha invalida." << endl;
				}				
			}

		}
	}
	
	
	return 0;
}
