#include <iostream>
#include <algorithm>
#include <sstream>

using namespace std; 

int main(){
	
	stringstream transforma;
	string inverte;
	long long int n;
	
	cin >> n;
	transforma << n;
	inverte = transforma.str();
	
	reverse(inverte.begin(),inverte.end());

	cout << inverte << endl;	
	
	
	return 0;
}
