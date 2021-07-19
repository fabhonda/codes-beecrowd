#include <iostream>

using namespace std;

int main(){
	
	int a,b,c;
	cin >> a >> b >> c;
	
	if(b<a){
		if(c>=b){
			cout << ":)" << endl;
		}
		if(c<b & (b-c < a-b)){
			cout << ":)" << endl;
		}
		if(c<b & (b-c >= a-b)){
			cout << ":(" << endl;
		}
	}
	if(b>a){
		if(c<=b){
			cout << ":(" << endl;
		}
		if(c>b & (c-b < b-a)){
			cout << ":(" << endl;
		}
		if(c>b & (c-b >= b-a)){
			cout << ":)" << endl;
		}
	}
	if(b==a){
		if(c>b){
			cout << ":)" << endl;
		}
		if(c<=b){
			cout << ":(" << endl;
		}
	}
	return 0;
}
