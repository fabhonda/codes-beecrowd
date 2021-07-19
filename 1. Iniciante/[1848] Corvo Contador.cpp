#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int analisa(string coisa){
	if(coisa[0]=='*'){
		if(coisa[1]=='*'){if(coisa[2]=='*') return 7;else return 6;}
		else{if(coisa[2]=='*') return 5;else return 4;}
	}
	else{
		if(coisa[1]=='*'){if(coisa[2]=='*') return 3;else return 2;}
		else{if(coisa[2]=='*') return 1;else return 0;}
	}
}

int main(){
	string corvo;
	int gritos=0, i=0, numeros[3] = {0,0,0};
	do{
		getline(cin,corvo);
		if(corvo=="caw caw"){gritos++;i++;}
		else numeros[i] += analisa(corvo);		
	}while(gritos<3);
	for(int i=0;i<3;i++){
		cout << numeros[i] << endl;
	}
	return 0;
}

