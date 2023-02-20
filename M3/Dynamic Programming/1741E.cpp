#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
  
 ll t;
 cin>>t;
 while(t--){
    ll n;
    cin>>n;
    ll arr[n+1];
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    vector<int>dp(n+1,0);
    dp[0]=1;
    for(int i=1;i<=n;i++){
        if(i-arr[i]-1>=0 && dp[i-arr[i]-1]==1)
        dp[i]=1;
        if(dp[i-1]==1 && i+arr[i]<=n)
        dp[i+arr[i]]=1;
    }
    if(dp[n]==1)
    cout<<"YES"<<"\n";
    else
    cout<<"NO"<<"\n";
 }
}
