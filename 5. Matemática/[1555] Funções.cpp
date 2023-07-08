#include<bits/stdc++.h>

using namespace std;

int vencedor(int x, int y){
	int r, b, c;
	r = pow(3*x,2) + pow(y,2);
	b = 2*(pow(x,2)) + pow(5*y,2);
	c = x*(-100) + pow(y,3);
	
	if(r>b && r>c){
		cout << "Rafael ganhou" << endl;
	}
	else if(b>r && b>c){
		cout << "Beto ganhou" << endl;
	}
	else{
		cout << "Carlos ganhou" << endl;
	}
}

int main(){
	
	int n, x, y;
	cin >> n;
	
	while(n--){
		cin >> x >> y;
		vencedor(x,y);
	}
	
	return 0;
}
