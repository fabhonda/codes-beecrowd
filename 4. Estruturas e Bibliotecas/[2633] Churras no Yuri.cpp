#include <iostream>
#include <vector>
#include <algorithm>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int main(){_
	
	int n,val;
	string food;
	vector<pair<int,string> > churras;
	
	while(cin>>n){
		while(n--){
			cin >> food >> val;
			churras.push_back(make_pair(val,food));
		}
		sort(churras.begin(),churras.end());
		for(int i=0;i<churras.size();i++){
			if(i==churras.size()-1){
				cout << churras[i].second << endl;
			}
			else{
				cout << churras[i].second << " ";
			}
		}
		churras.clear();
	}
	
	return 0;
}
