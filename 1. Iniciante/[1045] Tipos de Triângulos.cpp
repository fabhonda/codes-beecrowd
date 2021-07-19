#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
	
	float a,b,c;
	vector<float>triangulo;
	
	cin >> a >> b >> c;
	triangulo.push_back(a);
	triangulo.push_back(b);
	triangulo.push_back(c);
	
	sort(triangulo.begin(),triangulo.end());
	reverse(triangulo.begin(),triangulo.end());
	
	a = triangulo[0];
	b = triangulo[1];
	c = triangulo[2];
	
	if(a>= b+c){
		cout << "NAO FORMA TRIANGULO" << endl;
	}
	else{
		if(pow(a,2) == pow(b,2)+pow(c,2)){
			cout << "TRIANGULO RETANGULO" << endl;
		}
		if(pow(a,2) > pow(b,2)+pow(c,2)){
			cout << "TRIANGULO OBTUSANGULO" << endl;
		}
		if(pow(a,2) < pow(b,2)+pow(c,2)){
			cout << "TRIANGULO ACUTANGULO" << endl;
		}
		if(a==b && b==c){
			cout << "TRIANGULO EQUILATERO" << endl;
		}
		if((a==b & c!=a) || (a==c & b!=a) || (b==c & a!=c)){
			cout << "TRIANGULO ISOSCELES" << endl;
		}
	}

	return 0;
}
