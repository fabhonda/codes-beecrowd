#include <iostream>

long long int fib,calls;

using namespace std; 

int fibonacci(int n);

int main(){
	
	int x,n;
	
	cin >> n;
	for(int i=0;i<n;i++){
		calls = 0;
		cin >> x;
		fib = fibonacci(x);
		cout << "fib(" << x << ") = " << calls-1 << " calls = " << fib << endl;
	}
	
	return 0;
}

int fibonacci(int n){
	calls++;
	if(n==0){
		return 0;
	}
	if(n==1){
		return 1;
	}
	else{
		fib = fibonacci(n-1) + fibonacci(n-2);
	}
	return fib;
}
