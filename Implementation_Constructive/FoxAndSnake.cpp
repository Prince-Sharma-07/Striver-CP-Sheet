#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    bool flag = 1;
    for(int i = 1; i<=n; i++){
        if(i%2 == 0 && flag == 1){
        for(int k = 1; k<=m-1; k++){
            cout<<".";
        }
        cout<<"#"<<endl;
        flag = 0;
        }
        else if(i%2 == 0 && flag == 0){
        cout<<"#";
        for(int k = 1; k<=m-1; k++){
            cout<<".";
        }
        cout<<endl;
        flag = 1;
        }
        else{
        for(int j = 1; j<=m; j++){
            cout<<"#";
        }
        cout<<endl;
        }
    }
}