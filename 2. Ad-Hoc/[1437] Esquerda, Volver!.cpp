#include<bits/stdc++.h>
using namespace std;

int main(){
	
	long long n,i; 
	string s; char pos; cin >> n;
	
	while(n!=0){
		i=0;
		cin >> s;
		pos ='N';
		while(i<s.size()){
			if(s[i]=='D'){
				if(pos=='N') pos='L';
				else if(pos=='L') pos='S';
				else if(pos=='O') pos='N';
				else pos='O';
			}
			else{
				if(pos=='N') pos='O';
				else if(pos=='L') pos='N';
				else if(pos=='O') pos='S';
				else pos='L';	
			}
			i++;
		}
		cout << pos << endl;
		cin >> n;
	}
	
	return 0;
}
