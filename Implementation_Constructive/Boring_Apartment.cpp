#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       int a;
       cin>>a;
       int ans = 10*(a%10-1);
       int i = 1;
       while(a){
         ans += i;
         i++;
         a/=10;
       }
       cout<<ans<<endl;
    }
}