#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n,m,k,cont;
	vector<int> tam;
	
	cin >> n >> k;
	
	for(int i=0;i<k;i++){
		cin >> m;
		tam.push_back(m);
	}
	
	int lo = 1, hi=*max_element(tam.begin(),tam.end()), mid;
	while(lo<hi){
		mid = (lo+hi)/2;
		cont=0;
		for(int i=0;i<tam.size();i++){
			cont+=tam[i]/mid;
		}
		if(cont<n){
			hi = mid;
		}
		else{
			lo = mid+1;
		}
	}
	
	cout << lo-1 << endl;
	
	return 0;
}
