#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n, mandioca=0;
	vector<int> porcao{300,1500,600,1000,150,225};
	
	for(int i=0;i<5;i++){
		cin >> n;
		mandioca += (n*porcao[i]);
	}
	
	mandioca += porcao[5];
	cout << mandioca << endl;
	
	return 0;
}
