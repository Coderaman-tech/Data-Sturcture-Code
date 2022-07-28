//Count the subsequences with sum=k
#include<bits/stdc++.h>
#define ll long long
using namespace std;


int subseqsum(int index,int s,int sum,int arr[],int n){
  if(index==n){
    // condition satisfied
    if(s==sum)
    return 1;
   //condition not satisfied
    else return 0;
  }
  //pick
  s+=arr[index];
  int l=subseqsum(index+1,s,sum,arr,n);
  s-=arr[index];
  
  //not pick 
  int r=subseqsum(index+1,s,sum,arr,n);
  return l+r;
}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
  int arr[3]={1,2,1};
  int sum=2;
  int n=3;
  cout<<subseqsum(0,0,sum,arr,n);
  return 0;
}

/*
TC-O(2^n)
SC-O(1)
Output
2
*/
