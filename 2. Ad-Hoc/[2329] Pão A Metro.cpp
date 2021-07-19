#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	
	int n,m,k,cont;
	vector<int> tam;
	
	cin >> n >> k;
	
	for(int i=0;i<k;i++){
		cin >> m;
		tam.push_back(m);
	}
	int maior = *max_element(tam.begin(),tam.end());
	
	int fatia=1,max=0;
	while(fatia<maior){
		for(int i=0;i<tam.size();i++){
			cont+=tam[i]/fatia;
		}
		if(cont==n){
			max = fatia;
		}
		cont=0;
		fatia++;
	}
	
	cout << max << endl;
	
	return 0;
}
