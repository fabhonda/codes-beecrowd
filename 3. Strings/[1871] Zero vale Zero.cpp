#include <iostream>
#include <sstream>

using namespace std;

int main(){
	
	long long int m,n, soma;
	
	cin >> m >> n;
	
	while(m!=0 || n!=0){
		soma = n+m;
		string somaw0;
		stringstream transform;
		
		transform << soma;
		somaw0 = transform.str();
		
		for(int i=0;i<somaw0.size();i++){
			if(somaw0[i] != '0'){
				cout << somaw0[i];
			}
		}
		
		cout << endl;
		
		cin >> m >> n;
	}
	
	
	return 0;
}
