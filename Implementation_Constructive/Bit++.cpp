#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; 
    cin>>n;
    int x =0;
    while(n--){
        string c = "";
        cin>>c;
        if(c == "X++" || c=="++X") x++;
        else x--;
    }
    cout<<x;
    return 0;
}