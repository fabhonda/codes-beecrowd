#include <iostream>
#include <cmath>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int main(){_
	
	int a,b,q,r;
	
	cin >> a >> b;
	if(a==0){
		q = 0;
		r = 0;
	}
	else if(a>0){
		if(b>0){
			q = a/b;
			r = a%b;	
		}
		if(b<0){
			q = a/b;
			r = a - (q*b);	
		}
	}
	else{
		if(b<0){
			if((abs(a)%b)==0){
				q = (abs(a)/abs(b));
			}
			else{
				q = (abs(a)/abs(b))+1;
			}
			
			r = a - (q*b);
		}
		else{
			if((abs(a)%b)==0){
				q = ((abs(a)/b))*(-1);
			}
			else{
				q = ((abs(a)/b)+1)*(-1);
			}
			r = a - (q*b);
		}
	}
	cout << q << " " << r << endl;
	return 0;
}
