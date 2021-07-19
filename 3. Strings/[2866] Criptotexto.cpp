#include <iostream>
#include <algorithm>
#include <cctype>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int main(){
	
	int c;
	string text;
	
	cin >> c;
	while(c--){
		cin >> text;
		for(int i=0;i<text.size();i++){
			if(isupper(text[i])){
				text.erase(text.begin()+i);
				i--;
			}
		}
		reverse(text.begin(),text.end());
		cout << text << endl;
	}
	
	
	return 0;
}
