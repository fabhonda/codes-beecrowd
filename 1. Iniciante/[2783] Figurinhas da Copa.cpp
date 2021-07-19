#include <iostream>
#include <vector>

using namespace std;

int main(){
	
	int n,c,m,x,restantes;
	vector<int> carimbo, compradas;
	
	cin >> n >> c >> m;
	restantes = c;
	
	for(int i=0;i<c;i++){
		cin >> x;
		carimbo.push_back(x);
	}
	for(int i=0;i<m;i++){
		cin >> x;
		compradas.push_back(x);
	}
	for(int i=0;i<c;i++){
		for(int j=0;j<m;j++){
			if(carimbo[i] == compradas[j]){
				restantes--;
				break;
			}
		}
	}
	
	cout << restantes << endl;
	
	
	return 0;
}
