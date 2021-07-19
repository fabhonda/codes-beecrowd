#include <iostream>

using namespace std;

int main(){
	
	int x, y, voltas=0,a,b;
	
	cin >> x >> y;
	a=x,b=y;
	
	
	while(y-x < b){
		x+=a;
		y+=b;
		voltas++;
	}
	
	cout << voltas+1 << endl;
	
	
	return 0;
}
