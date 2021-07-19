#include <iostream>

using namespace std;

int main(){
	
	int n, voto, total;
	
	while(cin>>n){
		total=0;
		for(int i=0;i<n;i++){
			cin >> voto;
			if(voto==1){
				total++;
			}
		}
		if(total >= ((n/(float)3)*2)){
			cout << "impeachment" << endl;
		}
		else{
			cout << "acusacao arquivada" << endl;
		}
	}

	return 0;
}
