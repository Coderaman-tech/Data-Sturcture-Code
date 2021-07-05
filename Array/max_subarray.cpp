//maximum length of subarray
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int currlen=0,maxlen=0;
    for(int i=0;i<n;i++){
        currlen=0;
        for(int j=i;j<n;j++){
            currlen++;
        }
        if(currlen>maxlen)
        maxlen=currlen;
    }
    cout<<maxlen;
}