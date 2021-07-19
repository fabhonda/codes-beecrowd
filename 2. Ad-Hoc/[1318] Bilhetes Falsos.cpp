#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	
	int n,k,bilhete,m;
	vector<int> bil,tem;
	
	cin >> n >> m;
	
	while(n!=0 | m!=0){
		for(int i=0;i<m;i++){
			cin >> bilhete;
			bil.push_back(bilhete);
		}
		for(int i=0;i<m;i++){
			if(count(bil.begin(),bil.end(),bil[i])>1 & find(tem.begin(),tem.end(),bil[i])==tem.end()){
				tem.push_back(bil[i]);
			}
		}
		
		cout << tem.size() << endl;
		
		bil.clear();
		tem.clear();
		cin >> n >> m;
	}
	
	return 0;
}
