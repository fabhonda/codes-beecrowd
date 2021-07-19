#include <iostream>
#include <vector>

using namespace std;

int main(){
	
	int n,ano,qtd,dif,menor,min;
	string planeta;
	vector<string> planets;
	vector<int> tempo;
	
	cin >> n;
	
	while(n!=0){
		for(int i=0;i<n;i++){
			cin >> planeta >> ano >> qtd;
			dif = ano-qtd;
			planets.push_back(planeta);
			tempo.push_back(dif);			
		}
		menor = 0;
		min = tempo[0];
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				if(tempo[j]<min){
				    min = tempo[j];
					menor = j;
				}
			}
		}
		cout << planets[menor] << endl;
		planets.clear();
		tempo.clear();
		
		cin >> n;
	}
	
	
	return 0;
}
