#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define ll long long
using namespace std;

int main(){_
	ll int n, vale=-1, ant, prox, pattern=1;
	cin >> n >> ant;
	for(int i=1;i<n;i++){
		cin >> prox;
		if(prox==ant){pattern=0;break;}
		else if(prox > ant){if(vale==1){pattern=false;break;}else vale=1;}
		else if(prox < ant){if(vale==0){pattern=false;break;}else vale=0;}
		ant = prox;
	}
	if(pattern) cout << 1 << endl;
	else cout << 0 << endl;
	return 0;
}
