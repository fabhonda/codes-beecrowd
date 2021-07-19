#include <iostream>
#include <vector>

using namespace std;

int main(){
	
	long long int n,i=0;
	vector<long long int>numeros;
	bool erro=false;
	
	while(cin>>n){
		if(i==0){
			numeros.push_back(n);
		}
		else{
			numeros.push_back(n);
			if((numeros[i] < numeros[i-1]) & erro==false){
				cout << numeros[i-1]+1 << endl;
				erro=true;
			}
		}
		i++;
	}
	
	i = numeros.size();
	if(erro==false){
		cout << numeros[i-1]+1 << endl;
	}
	
	
	return 0;
}
