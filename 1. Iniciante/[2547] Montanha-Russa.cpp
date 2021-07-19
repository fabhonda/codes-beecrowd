#include <iostream>

using namespace std;

int main(){
	
	int n,min,max,h,podem;
	
	while(cin>>n>>min>>max){
		podem=0;
		for(int i=0;i<n;i++){
			cin >> h;
			if(h>=min & h<=max){
				podem++;
			}
		}
		cout << podem << endl;
	}
	
	return 0;
}
