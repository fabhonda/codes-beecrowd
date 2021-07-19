#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	
	char letra;
	string texto;
	bool tem;
	int contem=0,total=1;
	
	cin >> letra;
	cin.ignore();
	getline(cin,texto);
	bool sai = false;

	for(int i=0;i<texto.size();i++){
		if(texto[i]!=' ' & texto[i]==letra & sai==false){
			contem++;
			sai = true;
		}
		if(texto[i]==' '){
			sai = false;
			total++;
		}
	}
	
	cout << fixed << setprecision(1) << ((float)contem/(float)total)*100 << endl;
	
	
	return 0;
}
