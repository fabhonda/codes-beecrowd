#include <iostream>

using namespace std;

void tracos(int n);

int main(){
	
	tracos(39);
	int linha=1;
	
	for(int i=0;i<5;i++){
		for(int j=0;j<39;j++){
			if(j==0 || j==38){
				cout << "|";
			}
			else{
				cout << " ";
			}
			if(linha==1 & j==0){
				cout << "x = 35";
				j+=6;
			}
			if(linha==3 & j==15){
				cout << "x = 35";
				j+=6;
			}
			if(linha==5 & j==31){
				cout << "x = 35";
				j+=6;
			}
		}
		cout << endl;
		linha++;
	}
	
	tracos(39);
	return 0;	
}

void tracos(int n){
	for(int i=0;i<n;i++){
		cout << "-";
	}
	cout << endl;
}
