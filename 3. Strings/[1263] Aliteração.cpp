#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	
	string frase;
	char verifica;
	bool taut,stop;
	int alit;
	
	while(getline(cin,frase)){
		alit = 0;
		taut = true;
		stop = true;
		//cin.ignore();
		transform(frase.begin(),frase.end(),frase.begin(),::tolower);
		verifica = frase[0];
		for(int i=0;i<frase.size();i++){
			if(frase[i]==' ' & frase[i+1] == verifica & stop==true){
				alit++;
				stop = false;
			}
			else if(frase[i]==' ' & frase[i+1] != verifica){
				verifica = frase[i+1];
				stop = true;
			}
		}
		cout << alit << endl;
	}
	
	
	return 0;
}
