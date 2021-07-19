#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int cont, big=0, t;
	double pa, pb, ga, gb;
	cin >> t;
	while(t--){
		cin >> pa >> pb >> ga >> gb;
		cont=0, big=0;
		while(pa<=pb && cont<=100){
			pa+=(int)((pa/100)*ga);
			pb+=(int)((pb/100)*gb);
			//cout << "valor de pa: " << pa << " valor de pb: " << pb << endl; 
			cont++;
			if(pa>pb) break;
			if(cont>=100){big=1;break;}
		}
		if(big) cout << "Mais de 1 seculo." << endl;
		else cout << cont << " anos." << endl;		
	}
	return 0;	
}
