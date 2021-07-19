#include <iostream>
#include <vector>

using namespace std;

int main(){
	
	int n,k;
	string idioma;
	vector<string> language;
	bool nativo;
	
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> k;
		nativo = true;
		for(int j=0;j<k;j++){
			cin >> idioma;
			language.push_back(idioma);
		}
		for(int j=0;j<k;j++){
			if(idioma!=language[j]){
				nativo = false;
				break;
			}
		}
		if(nativo == false){
			cout << "ingles" << endl;
		}
		else{
			cout << idioma << endl;
		}
		language.clear();
	}
	
	return 0;
}
