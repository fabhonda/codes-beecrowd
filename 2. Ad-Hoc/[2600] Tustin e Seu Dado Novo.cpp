#include <iostream>

using namespace std;

int main(){
	
	int n,n1,n2,n3,n4,n5,n6;
	
	cin>>n;
	for(int i=0;i<n;i++){
		cin >> n1;
		cin >> n2 >> n3 >> n4 >> n5;
		cin >> n6;
		if(n1==n2 | n1==n3 | n1==n4 | n1==n5 | n1==n6 | n2==n3 | n2==n4 | n2==n5 | n2==n6 | n3==n4 | n3==n5 | n3==n6 | n4==n5 | n4==n6 | n5==n6 | n1<1 | n1>6 | n2<1 | n2>6 | n3<1 | n3>6 | n4<1 | n4>6 | n5<1 | n5>6 | n6<1 | n6>6) {
			cout << "NAO" << endl;
		}
		else{
			if(n1+n6==7 & n2+n4==7 & n3+n5==7){
				cout << "SIM" << endl;
			}
			else{
				cout << "NAO" << endl;
			}
		}
	}
	
	//n podem ser iguais e n podem ser maiores que 6 ou menores que 1
	return 0;
}
