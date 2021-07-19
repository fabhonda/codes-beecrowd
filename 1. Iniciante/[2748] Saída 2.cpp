#include <iostream>

using namespace std;

int main(){
	
	for(int i=0;i<39;i++){
		cout << "-";
	}
	cout << endl;
	int linha=1;
	for(int j=0;j<5;j++){
		for(int i=0;i<39;i++){
			if(linha==1 & i==9){
				cout << "Roberto";
				i+=7;
			}
			else if(linha==3 & i==9){
				cout << "5786";
				i+=4;
			}
			else if(linha==5 & i==9){
				cout << "UNIFEI";
				i+=6;
			}
			if(i==0 || i==38){
				cout << "|";
			}
			else{
				cout << " ";
			}
		}
		cout << endl;
		linha++;
	}
	for(int i=0;i<39;i++){
		cout << "-";
	}
	cout << endl;	
	
	return 0;
}
