#include<bits/stdc++.h>
using namespace std;

void function1(){
    for(int i=0;i<7;i++) cout << " ";
    cout << "A" << endl;
    
}

void function2(){
    for(int i=0;i<6;i++) cout << " ";
    cout << "B B" << endl;
}

void function3(){
    for(int i=0;i<5;i++) cout << " ";
    cout << "C   C" << endl;
}

void function4(){
    for(int i=0;i<4;i++) cout << " ";
    cout << "D     D" << endl;
}

void function5(){
    for(int i=0;i<3;i++) cout << " ";
    cout << "E       E" << endl;
}

int main(){
    function1();
    function2();
    function3();
    function4();
    function5();
    function4();
    function3();
    function2();
    function1();
    
    return 0;
}
