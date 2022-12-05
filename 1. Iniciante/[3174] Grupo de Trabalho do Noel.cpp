#include <bits/stdc++.h>

using namespace std;

vector<int> presents(4,0);

int presentsGroup(string group, int value){
    if(group == "bonecos") presents[0]+=value;
    else if (group == "arquitetos") presents[1]+=value;
    else if (group == "musicos") presents[2]+=value;
    else if (group == "desenhistas") presents[3]+=value;
}

int groups(int i){
    if(i == 0) return 8;
    else if (i == 1) return 4;
    else if (i == 2) return 6;
    else if (i == 3) return 12;
}

int main()
{
    int n, h, sum=0;
    string e, g;
    
    cin >> n;
    
    while(n--){
        cin >> e >> g >> h;
        presentsGroup(g,h);
    }
    
    for(int i=0;i<presents.size();i++){
        presents[i] = floor(presents[i]/groups(i));
        sum+=presents[i];
    }
    
    cout << sum << endl;

    return 0;
}
