#include <iostream>

using namespace std;

int main(){
	
	int day=0,hour=0,min=0,sec=0,d1,h1,m1,s1,d2,h2,m2,s2;
	string nada;
	
	cin >> nada >> d1;
	cin >> h1 >> nada >> m1 >> nada >> s1;
	cin >> nada >> d2;
	cin >> h2 >> nada >> m2 >> nada >> s2;
	if(s2>=s1){
		sec = s2-s1;
	}
	else{
		sec += 60-(s1-s2);
		min--;
	}
	if(m2>=m1){
		min += m2-m1;
	}
	else{
		min += 60 -(m1-m2);
		hour--;
	}
	if(h2>=h1){
		hour += h2-h1;
	}
	else{
		hour += 24-(h1-h2);
		day--;
	}
	day += d2-d1;
	
	cout << day << " dia(s)" << endl << hour << " hora(s)" << endl << min << " minuto(s)" << endl << sec << " segundo(s)" << endl;
	
	return 0;
}
