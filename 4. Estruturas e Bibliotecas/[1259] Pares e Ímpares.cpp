#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	
	int n,j=0,k=0,number;
	vector<int> numeros, pares, impares;
	
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> number;
		numeros.push_back(number);
		if(numeros[i] %2 ==0){
			pares.push_back(numeros[i]);
		}
		if(numeros[i] %2 != 0){
			impares.push_back(numeros[i]);
		}
	}
	
	sort(pares.begin(),pares.end());
	sort(impares.begin(),impares.end());
	reverse(impares.begin(),impares.end());
	
	for(int i=0;i<pares.size();i++){
		cout << pares[i] << endl;
	}
	for(int i=0;i<impares.size();i++){
		cout << impares[i] << endl;
	}
	
	return 0;
}
