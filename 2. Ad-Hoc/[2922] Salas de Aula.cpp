#include <iostream>

using namespace std;

int main(){
	
	int u,b;
	
	while(cin>>b>>u){
		if(b>u){
			cout << b-u-1 << endl;
		}
		else if(u>b){
			cout << u-b-1 << endl;
		}
		else{
			cout << 0 << endl;
		}
	}
	
	
	
	return 0;
}
