#include <iostream>
#include <vector>

using namespace std;

int main(){
	
	int n, m, indice;
	vector<int> motor;
	
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> m;
		motor.push_back(m);
	}
	
	bool entra = true;
	for(int i=1;i<n;i++){
		if(motor[i] < motor[i-1]){
			indice = i+1;
			entra = false;
			break;
		}
	}
	
	if(entra==true){
		cout << 0 << endl;
	}
	else{
		cout << indice << endl;
	}
	
	
	return 0;
}
