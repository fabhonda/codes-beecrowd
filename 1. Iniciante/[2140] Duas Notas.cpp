#include <iostream>

using namespace std;

int main(){
	
	int n,m,troco, dinheiro[6] = {2,5,10,20,50,100};
	bool sim;
	
	cin >> n >> m;
	while(n!=0 | m!=0){
		troco = m-n;
		sim = false;
		for(int i=0;i<5;i++){
			for(int j=i+1;j<6;j++){
				if((dinheiro[i] + dinheiro[j]) == troco){
					sim = true;
					break;
				}
			}
		}
		if(sim==false){
			cout << "impossible" << endl;
		}
		else{
			cout << "possible" << endl;
		}
		
		cin >> n >> m;
	}
	
	return 0;
}
