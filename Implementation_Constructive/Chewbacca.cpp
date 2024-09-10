#include<bits/stdc++.h>
using namespace std;
int main(){
     string s;
     cin>>s;
     for(int i = 0; i<s.size(); i++){
        if(i == 0){
            if(s[i] == '9') continue;
        }
        if(s[i] == '5') s[i] = '4';
        else if(s[i] == '6') s[i] = '3';
        else if(s[i] == '7') s[i] = '2';
        else if(s[i] == '8') s[i] = '1';
        else if(s[i] == '9') s[i] = '0';
        else if(s[i] - '0' < 5) continue;
     }
    cout<<s<<endl;
    return 0;
}