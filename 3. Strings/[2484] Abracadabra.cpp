#include <iostream>

using namespace std;

int main(){
	
	string palavra;
	int j, limite;
	
	while(cin>>palavra){
		limite = palavra.size();
		j=0;
		while(limite!=0){
			for(int i=0;i<j;i++){
				cout << " ";				
			}
			for(int i=0;i<limite;i++){
				if(i!=limite-1){
					cout << palavra[i] << " ";
				}
				else{
					cout << palavra[i];
				}
				
			}
			cout << endl;
			limite--;
			j++;
		}
		cout << endl;
	}
	
	
	
	return 0;
}
