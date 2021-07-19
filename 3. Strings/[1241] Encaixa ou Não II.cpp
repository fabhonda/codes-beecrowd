#include <iostream>

using namespace std;

int main(){
	
	int n,j;
	string n1,n2;
	bool yeah;
	
	cin >> n;
	
	for(int i=0;i<n;i++){
		cin >> n1 >> n2;
		j=n1.size()-n2.size();
		yeah = true;
  		for(int i=0;i<n2.size();i++){
			if(n1[j]!=n2[i]){
				yeah = false;
				break;
			}
			j++;
		}
		if(yeah==true){
			cout << "encaixa" << endl;
		}
		else{
			cout << "nao encaixa" << endl;
		}
	}
	
	
	return 0;
}
