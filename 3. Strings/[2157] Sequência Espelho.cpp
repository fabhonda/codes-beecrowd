#include <iostream>
#include <sstream>

using namespace std;

int main(){
	
	int c,b,e;
	stringstream convert;
	string espelho;
	
	cin >> c;
	for(int i=0;i<c;i++){
		cin >> b >> e;
		for(int j=b;j<=e;j++){
			convert << j;
		}
		espelho = convert.str();
		cout << espelho;
		for(int j=espelho.size()-1;j>=0;j--){
			cout << espelho[j];
		}
		cout << endl;
		convert.str("");
	}
	
	
	return 0;
}
