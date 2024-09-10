#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
    vector<int> res;
     string s;
     cin>>s;
     for(int i  = 0; i<s.size(); i++){
        if(s[i]!='0'){
            int zeros = s.size()-i-1;
            int num = (s[i]-'0')*pow(10,zeros);
            res.push_back(num);
        }
     }
    cout<<(int)res.size()<<endl;
    for(auto i : res){
        cout<<i<<" ";
    }
    cout<<endl;
   }
   return 0;
}