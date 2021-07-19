#include <iostream>
#include <vector>
#include <algorithm>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int main(){_
	
	int n,r,id;
	vector<int>ident;
	
	while(cin>>n>>r){	
		for(int i=0;i<r;i++){
			cin >> id;
			ident.push_back(id);
		}
		if(n==r){
			cout << "*" << endl;
		}
		else{
			sort(ident.begin(),ident.end());
			for(int i=1;i<n+1;i++){
				if(count(ident.begin(),ident.end(),i)==0){
					cout << i << " ";
				}
			}
			cout << endl;
		}
		ident.clear();
	}
	return 0;
}
