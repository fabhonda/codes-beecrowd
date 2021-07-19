#include <iostream>
using namespace std;
 
int main() {
 
    string s1, s2;
    int n, b=0, g=0; cin >> n;
    while(n--){
        cin >> s1 >> s2;
        if(s2=="F") g++;
        else if(s2=="M") b++;
    }
    cout << b << " carrinhos" << endl;
    cout << g << " bonecas" << endl;
    return 0;
}
