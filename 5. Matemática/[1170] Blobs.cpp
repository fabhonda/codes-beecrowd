#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n, dias;
	float c;
	
	cin >> n;
	while(n--){
		cin >> c;
		dias = 0;
		while(c>1){
			c/=2;
			dias++;
		}
		cout << dias << " dias" << endl;
	}
	
	return 0;
}
