#include <iostream>

using namespace std;

int main(){
	
	int t1,t2,l,c;
	
	cin >> l >> c;
	
	t1 = (l-1)*(c-1) + (l*c);
	t2 = ((l-1)*2) + ((c-1)*2);
	
	cout << t1 << endl;
	cout << t2 << endl;
	
	
	return 0;
}
