#include <iostream>
#include <cctype>

using namespace std;

int main(){
	
	string dancing;
	bool upper,space;
	
	while(getline(cin,dancing)){
		upper = true;
		space = false;
		for(int i=0;i<dancing.size();i++){
			if(dancing[i] == ' '){
				space = true;
			}
			else{
				space = false;
			}
			if(upper == true & space == false){
				dancing[i] = toupper(dancing[i]);
				upper = false;
			}
			else if(upper == false & space == false){
				dancing[i] = tolower(dancing[i]);
				upper = true;				
			}
		}
		for(int i=0;i<dancing.size();i++){
			cout << dancing[i];
		}
		cout << endl;
	}
	
	
	return 0;
}
