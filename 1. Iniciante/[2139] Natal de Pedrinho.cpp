//Iniciante - Questão 2139: Natal de Pedrinho
#include <bits/stdc++.h>

using namespace std;

int dias_do_mes(int dia, int mes){
	if(mes==1||mes==3||mes==5||mes==7||mes==8||mes==10) return 31-dia;
	else if(mes==2) return 29-dia;
	else return 30-dia;
}

int main(){
	int mes, dia,restante;
	while(cin>>mes>>dia){
		if(mes==12){
			if(dia<24)cout << "Faltam " << 31-dia << " dias para o natal!" << endl;
			else if(dia==24)cout<<"E vespera de natal!" << endl;
			else if(dia==25)cout<<"E natal!" << endl;
			else if(dia>25)cout<<"Ja passou!" << endl;
		}
		else{
			restante = dias_do_mes(dia,mes)+25;
			for(int i=mes+1;i<=11;i++){
				if(i==1||i==3||i==5||i==7||i==8||i==10) restante+=31;
				else if(i==2) restante+=29;
				else restante+=30;
			}
			cout << "Faltam " << restante << " dias para o natal!" << endl;
		}
	}	
	return 0;
}


