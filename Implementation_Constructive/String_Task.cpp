#include<bits/stdc++.h>
using namespace std;
bool isVowel(char c){
    if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'Y') return 1;
    else if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y') return 1;
    else return 0;
}

int main(){
    string s;
    cin>>s;
    string ans;
    for(int i = 0; i<s.size(); i++){
        if(isVowel(s[i])){
          continue;
        }
        else{
            ans +=  '.';
            ans += tolower(s[i]);
        }
    }
    cout<<ans;
    return 0;
}