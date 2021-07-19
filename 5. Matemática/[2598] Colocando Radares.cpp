#include <iostream>

using namespace std;

int main(){
	
	int c;
	long long int n,m,radar;
	
	cin >> c;
	for(int i=0;i<c;i++){
		radar=0;
		cin >> n >> m;
		for(int j=0;j<n;j+=m){
			radar++;
		}
		cout << radar << endl;
	}
	
	return 0;
}
