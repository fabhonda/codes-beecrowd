#include <iostream>

using namespace std;

int main(){
	
	
	int n,n1,n2;
	char x;
	
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> n1 >> x >> n2;
		if(n1==n2){
			for(int j=5;j<11;j++){
				cout << n1 << " x " << j << " = " << n1*j << endl;
			}
		}
		else{
			for(int j=5;j<11;j++){
				cout << n1 << " x " << j << " = " << n1*j << " && " << n2 << " x " << j << " = " << n2*j << endl;
			}
		}
	}
	
	return 0;
}
