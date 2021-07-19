#include <iostream>
#include <cctype>
#include <algorithm>

using namespace std;

int main(){
	
	string link, zelda="zelda";
	cin >> link;
	transform(link.begin(),link.end(),link.begin(),::tolower);
	size_t possui = link.find(zelda);
	if((possui != string::npos)){
		cout << "Link Bolado" << endl;
	}
	else{
		cout << "Link Tranquilo" << endl;
	}
	
	return 0;
}
