#include <iostream>

using namespace std;

int main(){
	
	string data;
	
	cin >> data;
	
	
	cout << data[3] << data[4] << data[5] << data[0] << data[1] << data[2] << data[6] << data[7] << endl;
	cout << data[6] << data[7] << data[5] << data[3] << data[4] << data[2] << data[0] << data[1] << endl;
	cout << data[0] << data[1] << "-" << data[3] << data[4] << "-" << data[6] << data[7] << endl;
	
	
	return 0;
}
