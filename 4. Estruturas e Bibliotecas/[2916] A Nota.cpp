#include <bits/stdc++.h> 
//#include <vector>

using namespace std;

long long int grade,vetor[1000006];
int n,k;
//vector<long long> notas;

int main(){

    while(scanf("%d%d",&n,&k)!=EOF){
        grade=0;
        for(int i=0;i<n;i++){
            scanf("%lld",vetor+i);
        }
        sort(vetor,vetor+n);
        for(int i=n-1;i>n-k-1;i--){
            grade += vetor[i];
        }
        printf("%lld\n",grade%1000000007);
    }
    return 0;
}

