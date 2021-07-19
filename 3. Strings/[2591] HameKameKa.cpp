#include <iostream>

using namespace std;

int main(){
	
	int n,begin,end;
	string hamekame, ka;
	bool second;
	
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> hamekame;
		second = true;
		ka = "k";
		begin=0,end=0;
		for(int i=1;i<hamekame.size();i++){
			if(hamekame[i]=='a'){
				if(second==true){
					begin++;
				}
				else{
					end++;
				}	
			}
			else{
				second = false;
			}
		}
		for(int i=0;i<begin*end;i++){
			ka.append("a");
		}
		cout << ka << endl;
		ka.clear();
	}
}
