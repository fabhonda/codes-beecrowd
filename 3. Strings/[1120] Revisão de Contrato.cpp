#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	
	int zero,verifica;
	string n;
	char d;
	
	cin >> d >> n;
	while(d!='0' | n!="0"){
		zero = 0;
		for(int i=0;i<n.size();i++){
			if(n[i]=='0'){
				zero++;
			}
			if(n[i]==d){
				n.erase(n.begin()+i);
				i--;
			}
		}
		verifica = n.size();
		atoi(n.c_str());
		if(n.empty() | verifica==zero){
			cout << 0 << endl;
		}
		else{
			cout << n << endl;	
		}
		n.clear();
		cin >> d >> n;
	}
	
	return 0;
}
