#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int i = 0 , j = s.size()-1;
        while(s[i] != '1'){
            i++;
        }
        while(s[j]!= '1'){
            j--;
        }
        int count = 0;
        while(i<j && i<s.size()){
            if(s[i] == '0'){
                count++;
            }
            i++;
        }
        cout<<count<<endl;
    }
    return 0;
}