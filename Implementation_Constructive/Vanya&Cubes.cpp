#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i = 2 , j = 1 , count = 0;
    while(j<=n){
        count++;
        j+=i;
        i++;
    }
    cout<<count;
    return 0;
}