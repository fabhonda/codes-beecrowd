#include <bits/stdc++.h>
#define pb push_back

using namespace std;

int main()
{
    int n, x, d;
    vector<int> points(2,0);
    
    cin >> n;
    while(n--){
        
        for(int i=0;i<6;i++){
            cin >> x >> d;
            if(i<3) points[0]+=(x*d);
            else points[1]+=(x*d);
        }
        
        if(points[0]>points[1]) cout << "JOAO" << endl;
        else cout << "MARIA" << endl;
        points[0]=0; points[1]=0;
    }

    return 0;
}
