#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

int main(){
	
	float numero, nota=0;
	vector<float> numbers;
	
	for(int i=0;i<5;i++){
		cin >> numero;
		numbers.push_back(numero);
	}
	
	sort(numbers.begin(),numbers.end());
	
	for(int i=1;i<4;i++){
		nota+=numbers[i];
	}
	
	cout << setprecision(1) << fixed << nota << endl;
	
	
	return 0;
}
