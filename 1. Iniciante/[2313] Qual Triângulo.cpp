#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	
	char retangulo;
	vector<int> lados;
	int a,b,c;
	
	cin >> a >> b >> c;
	
	lados.push_back(a);
	lados.push_back(b);
	lados.push_back(c);
	
	sort(lados.begin(),lados.end());
	reverse(lados.begin(),lados.end());
	
	if(lados[0]>= lados[1]+lados[2]){
		cout << "Invalido" << endl;
	}
	else{
		if((lados[0]*lados[0]) == (lados[1]*lados[1]) + (lados[2]*lados[2])){
			retangulo = 'S';
		}
		else{
			retangulo = 'N';
		}
		if(lados[0]==lados[1] & lados[1]==lados[2] & lados[0]==lados[2]){
			cout << "Valido-Equilatero" << endl << "Retangulo: " << retangulo << endl;
		}
		if((lados[0]==lados[1] & lados[2]!=lados[0]) | (lados[1]==lados[2] & lados[0]!=lados[1]) | (lados[0]==lados[2] & lados[1]!=lados[0])){
			cout << "Valido-Isoceles" << endl << "Retangulo: " << retangulo << endl;
		}
		if(lados[0]!=lados[1] & lados[1]!=lados[2] & lados[0]!=lados[2]){
			cout << "Valido-Escaleno" << endl << "Retangulo: " << retangulo << endl;
		}
	}
	
	return 0;
}
