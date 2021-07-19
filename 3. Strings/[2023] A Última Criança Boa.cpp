#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	
	int i;
	string nome,another;
	vector<pair<string,string> > t_names;
	
	while(getline(cin,nome)){
		another=nome;
		transform(nome.begin(),nome.end(),nome.begin(),::tolower);
		t_names.push_back(make_pair(nome,another));
	}

	sort(t_names.begin(),t_names.end());
	
	i = t_names.size() - 1;
	cout << t_names[i].second << endl;
	
	
	return 0;
}
