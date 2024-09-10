#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,n;
        cin>>a>>b>>n;
        long long count = -1;
            while(b <= n || a<=n){
                if(a>b){
                b += a;
                count++;
                }
                else{
                a += b;
                count++;
                }
            }
        cout<<count<<endl;
    } 
    return 0;
}