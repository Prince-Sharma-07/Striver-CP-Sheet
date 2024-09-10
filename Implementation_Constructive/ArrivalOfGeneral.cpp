#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int mini = INT_MAX, maxi = INT_MIN , minIndex , maxIndex;
    for(int i = 0; i<n; i++){
        cin>>arr[i];
        if(arr[i] <= mini){
            mini = arr[i];
            minIndex = i;
        }
        if(arr[i] > maxi){
            maxi = arr[i];
            maxIndex = i;
        }
    }
    if(maxIndex < minIndex) cout<<((n-1-minIndex) + maxIndex);
    else cout<<((n-1-minIndex) + (maxIndex-1));
}