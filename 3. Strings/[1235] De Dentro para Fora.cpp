#include <iostream>

using namespace std;

int main(){
	
	int n,metade,control;
	string normal,transform;
	
	cin >> n;
	cin.ignore();
	for(int i=0;i<n;i++){
		getline(cin,normal);
		transform = normal;
		metade = (normal.size()/2)-1;
		control = metade;
		for(int j=0;j<=metade;j++){
			transform[j] = normal[control];
			control--;
		}
		control = normal.size()-1;
		for(int j=metade+1;j<normal.size();j++){
			transform[j] = normal[control];
			control--;
		}
		cout << transform << endl;
		transform.clear();
		normal.clear();
	}
	
	return 0;
}
