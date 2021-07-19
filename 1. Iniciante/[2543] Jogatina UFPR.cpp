#include <iostream>

using namespace std;

int main(){
	
	int n,id,ide,cs,gameplays;
	
	while(cin>>n>>id){
		gameplays=0;
		for(int i=0;i<n;i++){
			cin >> ide >> cs;
			if(id==ide & cs==0){
				gameplays++;
			}
		}
		cout << gameplays << endl;
	}
	return 0;
}
