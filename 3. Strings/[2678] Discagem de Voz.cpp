#include <iostream>
#include <algorithm>
#include <cctype>

using namespace std;

int main(){
	
	string tel;
	
	while(getline(cin,tel)){
		transform(tel.begin(),tel.end(),tel.begin(),::tolower);
		for(int i=0;i<tel.size();i++){
			if(ispunct(tel[i])){
				if((tel[i]!='#' & tel[i]!='*') | tel[i]=='-'){
					tel.erase(tel.begin()+i);
				}
			}
			if(isblank(tel[i])){
				tel.erase(tel.begin()+i);
			}
			if(tel[i]=='a' | tel[i]=='b' | tel[i] == 'c'){
				tel[i] = '2';
			}
			if(tel[i]=='d' | tel[i]=='e' | tel[i] == 'f'){
				tel[i] = '3';
			}
			if(tel[i]=='g' | tel[i]=='h' | tel[i] == 'i'){
				tel[i] = '4';
				}
			if(tel[i]=='j' | tel[i]=='k' | tel[i] == 'l'){
				tel[i] = '5';
			}
			if(tel[i]=='m' | tel[i]=='n' | tel[i] == 'o'){
				tel[i] = '6';
			}
			if(tel[i]=='p' | tel[i]=='q' | tel[i] == 'r' | tel[i] == 's'){
				tel[i] = '7';
			}
			if(tel[i]=='t' | tel[i]=='u' | tel[i] == 'v'){
				tel[i] = '8';
			}
			if(tel[i]=='w' | tel[i]=='x' | tel[i] == 'y' | tel[i] == 'z'){
				tel[i] = '9';
				}
		}
		cout << tel << endl;
	}
	
	
	return 0;
}
