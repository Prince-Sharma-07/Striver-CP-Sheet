#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n , m;
        cin>>n>>m;
        char mat[n][m];
        for(int i = 0; i<n; i++){
            for(int j = 0; j<m; j++){
                cin>>mat[i][j];
            }
        }
        int count  = 0;
        for(int i = 0; i<n-1; i++){
            if(mat[i][m-1] == 'R') count++; 
        }
        for(int i = 0; i<m-1; i++){
            if(mat[n-1][i] == 'D') count++;
        }
        cout<<count<<endl;
    }
}