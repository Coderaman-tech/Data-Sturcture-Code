#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
   ll n;
   cin>>n;
   ll arr[n];
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
   int pref[n],suff[n];
   pref[0]=1,suff[n-1]=1;
  int ans=1;

   for(int i=1;i<n;i++){
    if(arr[i]>arr[i-1]){
        pref[i]=pref[i-1]+1;
    }
    else
    pref[i]=1;
   }
   for(int i=n-2;i>=0;i--){
    if(arr[i]<arr[i+1]){
        suff[i]=suff[i+1]+1;
    }
    else
    suff[i]=1;
   }



   for(int i=1;i<n-1;i++){
    ans=max(ans,pref[i]);
    if(arr[i-1]<arr[i+1]){
        ans=max(ans,pref[i-1]+suff[i+1]);
    }
   }
   ans=max(ans,pref[n-1]);
  cout<<ans<<"\n";
}
