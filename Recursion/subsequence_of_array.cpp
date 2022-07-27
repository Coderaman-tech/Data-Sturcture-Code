//Print all the subsequence of the array
#include<bits/stdc++.h>
#define ll long long
using namespace std;


void subseq(int index,vector<int>&ans,int arr[],int n){
  if(index==3){
    for(int i=0;i<ans.size();i++)
    cout<<ans[i]<<" ";
     if(ans.size()==0){
    cout<<"{}";
   }
   cout<<"\n";
    return ;
  }
 //pick the particular index into the subsequence
  ans.push_back(arr[index]);
  subseq(index+1,ans,arr,n);
  //not pick the particular index into the subsequence
  ans.pop_back();
  subseq(index+1,ans,arr,n);
}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
  int arr[3]={3,1,2};
  vector<int>ans;
  subseq(0,ans,arr,3);
  return 0;
}

/*
TC-n*2^n
SC- O(n)

Output
3 1 2 
3 1 
3 2 
3 
1 2 
1 
2 
{}
*/
