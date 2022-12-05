#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    
    while(cin >> n >> m){
        int matrix[n][m];
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin >> matrix[i][j];
                if(matrix[i][j] == 1) matrix[i][j] = 9;
            }
        }
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j] == 0){
                    int sum=0;
                    if(j-1 >= 0 && matrix[i][j-1]==9) sum++;
                    if(j+1 != m && matrix[i][j+1]==9) sum++;
                    if(i-1 >= 0 && matrix[i-1][j]==9) sum++;
                    if(i+1 != n && matrix[i+1][j]==9) sum++;
                    matrix[i][j] = sum;
                }
                if(j<m-1) cout << matrix[i][j];
                else cout << matrix[i][j] << endl;
            }
        }
        
    }

    return 0;
}
