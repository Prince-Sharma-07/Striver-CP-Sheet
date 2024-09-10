#include<bits/stdc++.h>
using namespace std;
bool isPossible(string s , string t){
    if(s[0] == t[0] || s[1] == t[1]) return 1;
    return 0;
}
int main(){
    string table;
    cin>>table;
    vector<string> hands(5);
    for(int i = 0; i<5; i++){
        cin>>hands[i];
    }
    for(int i = 0; i<hands.size(); i++){
         if(isPossible(table , hands[i])){
            cout<<"Yes"<<endl;
            return 0;
         }
    }
  cout<<"No";
  return 0;
}