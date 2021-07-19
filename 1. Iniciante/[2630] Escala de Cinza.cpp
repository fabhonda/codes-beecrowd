#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	
	vector<int> cores;
	string abord;
	int n, cor;
	
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> abord;
		for(int j=0;j<3;j++){
			cin >> cor;
			cores.push_back(cor);
		}
		if(abord=="min"){
			sort(cores.begin(),cores.end());
			cout << "Caso #" << i+1 << ": " << cores[0] << endl;
		}
		if(abord=="max"){
			sort(cores.begin(),cores.end());
			cout << "Caso #" << i+1 << ": " << cores[2] << endl;
		}
		if(abord=="eye"){
			cout << "Caso #" << i+1 << ": " << (int)((0.3*cores[0])+(0.59*cores[1])+(0.11*cores[2])) << endl;
		}
		if(abord=="mean"){
			cout << "Caso #" << i+1 << ": " << (int)((cores[0]+cores[1]+cores[2])/3) << endl;
		}
		
		cores.clear();
	}
	
	return 0;
}
