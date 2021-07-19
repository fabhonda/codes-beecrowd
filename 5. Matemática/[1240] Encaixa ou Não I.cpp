#include <iostream>
#include <sstream>

using namespace std;

int main(){
	
	int n,j;
	long long int number1,number2;
	stringstream convert1, convert2;
	string n1,n2;
	bool yeah;
	
	cin >> n;
	
	for(int i=0;i<n;i++){
		cin >> number1 >> number2;
		convert1 << number1;
		convert2 << number2;
		n1 = convert1.str();
		n2 = convert2.str();
		if(n2.size()>n1.size()){
			yeah = false;
		}
		else{
			yeah = true;
			j = n1.size()-1;
			for(int i=n2.size()-1;i>=0;i--){
				if(n2[i]!=n1[j]){
					yeah = false;
					break;
				}
				j--;
			}
		}
		if(yeah==true){
			cout << "encaixa" << endl;
		}
		else{
			cout << "nao encaixa" << endl;
		}
		convert1.str("");
		convert2.str("");
	}
	
	
	return 0;
}
