#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
   vector<int> nums(7);
   int i = 0;
   while(i<7){
     cin>>nums[i];
     i++;
   }
   i = 0;
   while(n > 0){
    n -= nums[i];
    i = (i+1)%7;
   }
   if(i == 0) cout<<"7";
   else cout<<i;
    return 0;
}