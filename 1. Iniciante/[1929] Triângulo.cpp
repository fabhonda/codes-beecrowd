#include <bits/stdc++.h>

using namespace std;

int triangulo(int a, int b, int c){
	if(abs(b-c)<a && a<b+c){
		if(abs(a-c)<b && b<a+c){
			if(abs(a-b)<c && c<a+b) return 1;
			else return 0;
		}else return 0;
	}else return 0;
}

int main(){
	int a,b,c,d;
	cin >> a >> b >> c >> d;
	if(triangulo(a,b,c)) cout << "S" << endl;
	else if(triangulo(a,b,d)) cout << "S" << endl;
	else if(triangulo(b,d,c)) cout << "S" << endl;
	else if(triangulo(c,d,a)) cout << "S" << endl;
	else cout << "N" << endl;
	return 0;
}
