#include <iostream>

using namespace std;

int main(){
	
	int n;
	string entry;
	
	cin >> n;
	cin.ignore();
	for(int i=0;i<n;i++){
		getline(cin,entry);
		for(int j=0;j<entry.size();j++){
			if(j==0 & entry[j]!=' '){
				cout << entry[j];
			}
			if(entry[j]==' ' & entry[j+1]!=' ' & (j+1)<entry.size()){
				cout << entry[j+1];
			}
		}
		cout << endl;
	}
	
	return 0;
}
