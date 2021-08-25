#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    sort(&arr[0],&arr[n]);
    
    //for k min 
    cout<<"Kth min element is "<<arr[k-1]<<"\n";
    
    //for k max
    cout<<"Kth max element is "<<arr[n-k]<<"\n";
}
