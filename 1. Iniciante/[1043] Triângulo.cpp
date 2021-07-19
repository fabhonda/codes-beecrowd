#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int main(){_
	int number,i=0;
	vector<int>sides;
	
	while(i<4){
		cin >> number;
		sides.push_back(number);
		i++;
	}
	sort(sides.begin(),sides.end());
	if((sides[0]<=sides[1]+sides[2] && sides[0]>=abs(sides[1]-sides[2])) && ((sides[1]<=sides[0]+sides[2] && sides[1]>=abs(sides[0]-sides[2])) && (sides[2]<=sides[0]+sides[1]) && sides[2]>=abs(sides[0]-sides[1]))){
		cout << "S" << endl;
	}
	else if((sides[1]<=sides[2]+sides[3] && sides[1]>=abs(sides[2]-sides[3])) && ((sides[2]<=sides[1]+sides[3] && sides[2]>=abs(sides[1]-sides[3])) && (sides[3]<=sides[1]+sides[2]) && sides[3]>=abs(sides[1]-sides[2]))){
		cout << "S" << endl;
	}
	else{
		cout << "N" << endl;
	}
}
