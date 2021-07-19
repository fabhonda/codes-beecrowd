#include <iostream>
#include <vector>

using namespace std;

int main(){
	
	int n;
	string palavra;
	vector<string> correct;
	
	cin >> n;
	
	for(int i=0;i<n;i++){
		cin >> palavra;
		if(((palavra[0]=='U' & palavra[1]=='R') || (palavra[0]=='O' & palavra[1]=='B')) & palavra.size()==3){
			palavra[2] = 'I';
			correct.push_back(palavra);
		}
		else{
			correct.push_back(palavra);
		}
	}
	
	for(int i=0;i<correct.size();i++){
		if(i==correct.size()-1){
			cout << correct[i] << endl;
		}
		else{
			cout << correct[i] << " ";
		}
	}
	
	
	return 0;
}
