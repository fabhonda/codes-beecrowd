#include <iostream>
#include <vector>
#include <algorithm>
#include <cctype>

using namespace std;

int main(){
	
	int n;
	vector<char> alfabeto;
	string frase;
	bool tem;
	cin >> n;
	while(n--){
		cin.ignore();
		getline(cin,frase);
		for(int i=0;i<frase.size();i++){
			tem=false;
			if(isalpha(frase[i])!=0){
				for(int j=0;j<alfabeto.size();j++){
					if(frase[i]==alfabeto[j]){
						tem=true;
						break;
					}
				}
				if(tem==false){
					alfabeto.push_back(frase[i]);	
				}
			}
		}
		if(alfabeto.size()==26){
			cout << "frase completa" << endl;
		}
		else if(alfabeto.size()>=13){
			cout << "frase quase completa" << endl;
		}
		else{
			cout << "frase mal elaborada" << endl;
		}
		
		alfabeto.clear();
	}
	
	
	return 0;
}
