//Print all the subsequence of the array whose sum is k
#include<bits/stdc++.h>
#define ll long long
using namespace std;


void subseqsum(int index,vector<int>&ans,int s,int sum,int arr[],int n){
  if(index==3){
    if(s==sum){
      for(auto it:ans)
        cout<<it<<" ";
      cout<<"\n";
   }
    return ;
  }
 //pick the particular index into the subsequence
  ans.push_back(arr[index]);
  s+=arr[index];
  subseqsum(index+1,ans,s,sum,arr,n);
  s-=arr[index];
  ans.pop_back();
  //not pick the particular index into the subsequence
  subseqsum(index+1,ans,s,sum,arr,n);

}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
  int arr[3]={1,2,1};
  vector<int>ans;
  int sum=2;
  int n=3;
  subseqsum(0,ans,0,sum,arr,n);
  return 0;
}

/*
Output
1 1 
2
*/
