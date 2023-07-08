#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n, m, x, gol=0, golPartidas=0;
	
	cin >> n >> m;
	for(int i=0;i<n;i++){
		gol = 0;
		for(int j=0;j<m;j++){
			cin >> x;
			if(x>0){
				gol++;
			}
		}
		if(gol == m){
			golPartidas++;
		}
	}
	cout << golPartidas << endl;
	
	return 0;
}
