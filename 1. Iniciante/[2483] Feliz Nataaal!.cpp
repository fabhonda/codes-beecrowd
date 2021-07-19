#include <iostream>

using namespace std;

int main(){
	
	int i;
	string parte1 = "Feliz nat", parte2,parte3 = "l!";
	
	cin >> i;
	for(int j=0;j<i;j++){
		parte2.push_back('a');
	}
	
	cout << parte1 << parte2 << parte3 << endl;
	
	
	return 0;
}
