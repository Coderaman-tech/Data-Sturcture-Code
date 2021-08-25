#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int temp;
    int low=0,mid=0,high=n-1;
    while(mid<=high){
        if(arr[mid]==0){
            temp=arr[mid];
            arr[mid]=arr[low];
            arr[low]=temp;
            low++;
            mid++;
        }
        else if(arr[mid]==2){
             temp=arr[mid];
            arr[mid]=arr[high];
            arr[high]=temp;
            high--;
        }
        else{
            mid++;
        }
    }
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}
