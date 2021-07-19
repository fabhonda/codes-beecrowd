#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
using namespace std;

int main(){_
	
	int t, n;
	do{
		cin >> t;
		for(int i=0;i<t;i++){
			cin >> n;
			if(n%2==0) cout << (n-1)*2 << endl;
			else cout << (n*2)-1 << endl;
		}
	}while(t!=0);
	return 0;
}
