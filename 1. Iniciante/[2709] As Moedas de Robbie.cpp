#include <bits/stdc++.h>
#define pb push_back
 
using namespace std;
 
int main() {
 
    long long m, vi, n;
    while(cin >> m){
        vector<long long> v(m);
        for(int i=0; i<m;i++){
            cin >> vi;
            v[i] = vi;
        }
        cin >> n;
        long long ans=0;
        for(int i=v.size()-1; i>=0;i-=n){
            ans+=v[i];
        }
        //cout << ans << endl;
        bool found=false;
        for(int i=ans-1;i>1;i--){
            if(ans%i==0){found=true;break;}
        }
        if(found || ans==1) cout << "Bad boy! I’ll hit you." << endl;
        else cout << "You’re a coastal aircraft, Robbie, a large silver aircraft." << endl;
        v.clear();
    }
 
    return 0;
}
