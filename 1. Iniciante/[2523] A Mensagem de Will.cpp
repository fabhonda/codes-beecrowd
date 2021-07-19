#include <iostream>

using namespace std;

int main(){
	
	int l, number;
	string alfabeto;
	
	while(cin>>alfabeto){
		cin >> l;
		for(int i=0;i<l;i++){
			cin >> number;
			cout << alfabeto[number-1];
		}
		cout << endl;
	}
	
	return 0;
}
