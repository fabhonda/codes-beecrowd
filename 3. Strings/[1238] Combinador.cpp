#include <iostream>
#include <vector>

using namespace std;

int main(){
	
	string str1, str2;
	string comb;
	int menor, n;
	
	cin >> n;
	for(int j=0;j<n;j++){
		cin >> str1 >> str2;
		
		if(str1.size() < str2.size()){
			menor = str1.size();
		}
		else if(str2.size() < str1.size()){
			menor = str2.size();
		}
		else{
			menor = str1.size()*2;
		}
		
		for(int i=0;i<menor;i++){
			comb.push_back(str1[i]);
			comb.push_back(str2[i]);
		}
		
		if(str1.size() == str2.size()){
			for(int i=0; i<menor;i++){
				cout << comb[i];
			}
			cout << endl;
		}
		else{
			if(str1.size() < str2.size()){
				for(int i=menor;i<str2.size();i++){
					comb.push_back(str2[i]);
				}
			}
			else{
				for(int i=menor;i<str1.size();i++){
					comb.push_back(str1[i]);
				}			
			}
			for(int i=0;i<comb.size();i++){
				cout << comb[i];
			}
			cout << endl;
		}
		comb.clear();
	}
	
	return 0;
}
