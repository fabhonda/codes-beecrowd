#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	
	string text, bold = "<b>", bold2 = "</b>", ital = "<i>", ital2  = "</i>";
	bool close, close2;
	
	while(getline(cin,text)){
		close=false;
		close2=false;
		for(int i=0;i<text.size();i++){
			if(text[i]=='*'){
				if(close==false){
					text.erase(text.begin()+i);
					text.insert(i,bold);
					close=true;					
				}
				else{
					text.erase(text.begin()+i);
					text.insert(i,bold2);
					close=false;						
				}

			}
			if(text[i]=='_'){
				if(close2==false){
					text.erase(text.begin()+i);
					text.insert(i,ital);
					close2=true;					
				}
				else{
					text.erase(text.begin()+i);
					text.insert(i,ital2);
					close2=false;						
				}

			}
		}
		cout << text << endl;
	}
	
	return 0;
}
