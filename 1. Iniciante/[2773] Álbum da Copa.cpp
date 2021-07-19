#include<bits/stdc++.h>
using namespace std;

int main(){
    
    long long n,m,x;cin>>n>>m;
    set<long long> v;
    for(int i=0;i<m;i++){
        cin >> x;
        v.insert(x);
    }
    cout << n - v.size() << endl;
    
    return 0;
}
