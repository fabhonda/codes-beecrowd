#include <iostream>

using namespace std;

int main(){
	
	int t,a,w,c,porc;
	
	while(cin>>t>>a>>w>>c){
		porc = (a/(float)t)*100;
		if(porc < w){
			cout << "OK" << endl;
		}
		else if(porc>=w & porc<c){
			cout << "warning" << endl;
		}
		else{
			cout << "critical" << endl;
		}
	}
	
	return 0;
}
