#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	
	int n;
	string number;
	vector<string> numeros;
	
	while(cin >> n){
		for(int i=0;i<n;i++){
			cin >> number;
		 	numeros.push_back(number);
		}
		sort(numeros.begin(),numeros.end());
		for(int i=0;i<n;i++){
			cout << numeros[i] << endl;
		}
		numeros.clear();
	}		
	
	return 0;
}
