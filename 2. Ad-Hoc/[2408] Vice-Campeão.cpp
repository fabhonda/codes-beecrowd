#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	
	int pont;
	vector<int> pos;
	
	for(int i=0;i<3;i++){
		cin >> pont;
		pos.push_back(pont);
	}
	
	sort(pos.begin(),pos.end());
	
	cout << pos[1] << endl;
	
	return 0;
}
