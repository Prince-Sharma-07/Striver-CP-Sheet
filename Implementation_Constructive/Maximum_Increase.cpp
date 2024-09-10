#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    vector<long long> nums(n);
    for(long long i = 0; i<n; i++){
        cin>>nums[i];
    }
    if(n < 2){
      cout<<1; 
      return 0;
    } 
    long long maxi = INT_MIN , i = 0 , count = 1;
    while(i<n-1){
       if(nums[i] < nums[i+1]){
        count++;
        i++;
       }
       else{
        count = 1;
        i++;
       }
       maxi = max(maxi , count);
    }
    cout<<maxi;
    return 0;
}