#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	
	string nome;
	int n,s,b,a,s1,b1,a1,st=0,bt=0,at=0,ss=0,bs=0,as=0;
	float bloqueio,saque,ataque;
	
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> nome;
		cin >> s >> b >> a;
		cin >> s1 >> b1 >> a1;
		
		st+=s, bt+=b, at+=a;
		ss+=s1, bs+=b1, as+=a1;
	}
	
	saque = ((float)ss/(float)st)*100;
	bloqueio = ((float)bs/(float)bt)*100;
	ataque = ((float)as/(float)at)*100;
	
	cout << "Pontos de Saque: " << setprecision(2) << fixed << saque << " %." << endl;
	cout << "Pontos de Bloqueio: " << setprecision(2) << fixed << bloqueio << " %." << endl;
	cout << "Pontos de Ataque: " << setprecision(2) << fixed << ataque << " %." << endl;
	
	return 0;
}
