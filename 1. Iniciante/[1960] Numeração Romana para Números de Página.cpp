#include <bits/stdc++.h>
#include <cstdlib>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int main(){
	string numero, unidades[9] = {"I","II","III","IV","V","VI","VII","VIII","IX"}, dezenas[9] = {"X","XX","XXX","XL","L","LX","LXX","LXXX","XC"}, centenas[9] = {"C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
	vector<string> romano;
	cin >> numero;
	reverse(numero.begin(),numero.end());
	for(int i=0;i<numero.size();i++){
		string oi(1,numero[i]);
		int n = atoi(oi.c_str());
		if(i==0 && numero[i]!='0') romano.push_back(unidades[n-1]);
		else if(i==1 && numero[i]!='0') romano.push_back(dezenas[n-1]);
		else if(i==2) romano.push_back(centenas[n-1]);
	}
	reverse(romano.begin(),romano.end());
	for(int i=0;i<romano.size();i++) cout << romano[i];
	cout << endl;
	return 0;
}
