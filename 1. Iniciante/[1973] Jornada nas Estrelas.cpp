#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, carneiros, ant=0;
	long long int total=0;
	vector <int> estrelas, visitados;
	cin >> n;
	while(n--){
		cin >> carneiros;
		estrelas.push_back(carneiros);
		visitados.push_back(0);
		total+=carneiros;
	}
	int i=0, visitei=0;
	while(i>=0 && i<estrelas.size()){
		if(visitados[i]==0){visitados[i]=1;visitei++;}
		ant = estrelas[i];
		if(estrelas[i]!=0){estrelas[i]--;total--;}
		//cout << "estrela " << i << "| carneiros: " << estrelas[i] << "total: " << total << " " << endl;
		if(ant%2==0) i--;
		else i++;
	}
	cout << visitei << " " << total << endl;
	return 0;
}
