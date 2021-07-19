#include <iostream>
#include <iomanip>

using namespace std;


int main(){
	
	float v,d,r,a,h;
	
	while(cin >> v >> d){
		r = (float)d/(float)2;
		a = r*r*3.14;
		h = (float)v/(float)a;
		
		cout << "ALTURA = " << setprecision(2) << fixed << h << endl;
		cout << "AREA = " << setprecision(2) << fixed << a << endl;
	}
	
	
	return 0;
}
