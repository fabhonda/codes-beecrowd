#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	
	int n,q,number;
	vector<int>consultas;
	
	while(cin>>n>>q){
		for(int i=0;i<n;i++){
			cin >> number;
			consultas.push_back(number);
		}
		sort(consultas.begin(),consultas.end());
		reverse(consultas.begin(),consultas.end());
		for(int i=0;i<q;i++){
			cin >> number;
			cout << consultas[number-1] << endl;
		}
		consultas.clear();
	}
	
	
	
	return 0;
}
