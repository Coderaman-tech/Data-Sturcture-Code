#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int maximum=arr[0],minimum=arr[0];
  for(int i=0;i<n;i++){
      maximum=max(maximum,arr[i]);
      minimum=min(minimum,arr[i]);
  }
  cout<<maximum<<" "<<minimum;
}
