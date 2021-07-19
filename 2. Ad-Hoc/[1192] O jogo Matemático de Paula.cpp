#include <iostream>
#include <cctype>

using namespace std;

int main(){
	
	int n,n1,n2;
	char l;
	
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> n1 >> l >> n2;
		if(n1==n2){
			cout << n1*n2 << endl;
		}
		else{
			if(isupper(l)){
				cout << n2-n1 << endl;
			}
			else{
				cout << n2+n1 << endl;
			}
		}
	}
	
	return 0;
}
